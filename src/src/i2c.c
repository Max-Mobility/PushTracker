#include "i2c.h"

#include <blestack/hw.h>
#include "ioCC2541_bitdef.h"   
#include <ioCC2541.h>
#include "i2c.h"
#include "leds.h"
#include "globals.h"
#include <string.h>


#define I2C_ENS1            (1<<6)
#define I2C_STA             (1<<5)
#define I2C_STO             (1<<4)
#define I2C_SI              (1<<3)
#define I2C_AA              (1<<2)
#define I2C_MST_RD_BIT      (1<<0)  // Master RD/WRn bit to be OR'ed with Slave address.

#define I2C_CLOCK_MASK      0x83

#define I2C_PXIFG           P2IFG
#define I2C_IF              P2IF
#define I2C_IE              (1<<1)

#define I2C_INT_ENABLE()   st( IEN2 |=  I2C_IE; )
#define I2C_INT_DISABLE()  st( IEN2 &= ~I2C_IE; )

/* ------------------------------------------------------------------------------------------------
 *                                           Typedefs
 * ------------------------------------------------------------------------------------------------
 */
typedef uint16 i2cLen_t;

typedef enum {
  i2cClock_123KHZ = 0x00,
  i2cClock_144KHZ = 0x01,
  i2cClock_165KHZ = 0x02,
  i2cClock_197KHZ = 0x03,
  i2cClock_33KHZ  = 0x80,
  i2cClock_267KHZ = 0x81,
  i2cClock_533KHZ = 0x82
} i2cClock_t;

typedef enum {
  // HAL_I2C_MASTER mode statuses.
  mstStarted   = 0x08,
  mstRepStart  = 0x10,
  mstAddrAckW  = 0x18,
  mstAddrNackW = 0x20,
  mstDataAckW  = 0x28,
  mstDataNackW = 0x30,
  mstLostArb   = 0x38,
  mstAddrAckR  = 0x40,
  mstAddrNackR = 0x48,
  mstDataAckR  = 0x50,
  mstDataNackR = 0x58,

  // HAL_I2C_SLAVE mode statuses.
  slvAddrAckR  = 0x60,
  mstLostArbR  = 0x68,
  slvAddrAckG  = 0x70,
  mstLostArbG  = 0x78,
  slvDataAckR  = 0x80,
  slvDataNackR = 0x88,
  genDataAckR  = 0x90,
  genDataNackR = 0x98,
  slvStopped   = 0xA0,
  slvAddrAckW  = 0xA8,
  mstLostArbW  = 0xB0,
  slvDataAckW  = 0xB8,
  slvDataNackW = 0xC0,
  slvLastAckW  = 0xC8,

  // HAL_I2C_MASTER/SLAVE mode statuses.
  i2cIdle      = 0xF8
} i2cStatus_t;

#define I2C_WRAPPER_DISABLE() st( I2CWC    =     0x0C;              )
#define I2C_CLOCK_RATE(x)     st( I2CCFG  &=    ~I2C_CLOCK_MASK;    \
                                  I2CCFG  |=     x;                 )

#define I2C_CLR_NACK()  st( I2CCFG |=  I2C_AA; )
#define I2C_SET_NACK()  st( I2CCFG &= ~I2C_AA; )

// Master to Ack to every byte read from the Slave; Slave to Ack Address & Data from the Master.
#define I2C_ENABLE()  st( I2CCFG |= (I2C_ENS1 | I2C_AA); )

// Must clear SI before setting STA and then STA must be manually cleared.
#define I2C_STRT() st (             \
  I2CCFG =(I2CCFG&(~I2C_SI))| I2C_STA;                \
  while ((I2CCFG & I2C_SI) == 0);   \
  I2CCFG &= ~I2C_STA;               \
)

// Must set STO before clearing SI.
#define I2C_STOP() st (             \
  I2CCFG |= I2C_STO;                \
  I2CCFG &= ~I2C_SI;                \
  while ((I2CCFG & I2C_STO) != 0);  \
)

// Stop clock-stretching and then read when it arrives.
#define I2C_READ(_X_) st (          \
  I2CCFG &= ~I2C_SI;                \
  while ((I2CCFG & I2C_SI) == 0);   \
  (_X_) = I2CDATA;                  \
)

// First write new data and then stop clock-stretching.
#define I2C_WRITE(_X_) st (         \
  I2CDATA = (_X_);                  \
  I2CCFG &= ~I2C_SI;                \
  while ((I2CCFG & I2C_SI) == 0);   \
)

// Stop clock-stretching and then read when it arrives.
#define SLV_READ(_X_) st (          \
  I2CCFG &= ~I2C_SI;                \
  while (((I2CCFG & I2C_SI) == 0)   \
    &&    (I2CSTAT != slvStopped)); \
  (_X_) = I2CDATA;                  \
)

// First write new data and then stop clock-stretching.
#define SLV_WRITE(_X_) st (         \
  I2CDATA = (_X_);                  \
  I2CCFG &= ~I2C_SI;                \
  while (((I2CCFG & I2C_SI) == 0)   \
    &&    (I2CSTAT != slvStopped)); \
)

i2c_info i2c;
//const uint16 i2c_buffer_size=300;
//uint8 i2c_buffer[300];
//uint16 i2c_buffer_read_index=0;
//uint16 i2c_buffer_write_index=0;
//uint16 i2c_buffer_freespace=300;
//
//uint8 i2cstate=0;


void enable_i2c(enum i2c_on_off on_off)
{
  
  P1_1 = on_off;
  i2c_status = on_off;
  delay_ms(5);        
}

//uint16 index(uint16 n)
//{
//  return (n%i2c_buffer_size);
//}
static uint8 i2cAddr;  // Target Slave address pre-shifted up by one leaving RD/WRn LSB as zero.

#define HAL_I2C_BUF_MAX 300

static volatile i2cLen_t i2cRxLen, i2cTxLen;
//static i2cCallback_t i2cCB;
static volatile i2cLen_t i2cRxIdx, i2cTxIdx;

enum i2c_on_off i2c_status = i2c_off;


/**************************************************************************************************
 * @fn          i2cMstStrt
 *
 * @brief       Attempt to send an I2C bus START and Slave Address as an I2C bus Master.
 *
 * input parameters
 *
 * @param       RD_WRn - The LSB of the Slave Address as Read/~Write.
 *
 * output parameters
 *
 * None.
 *
 * @return      The I2C status of the START request or of the Slave Address Ack.
 */
static uint8 i2cMstStrt(uint8 RD_WRn)
{
  I2C_STRT();

  if ((I2CSTAT == mstStarted)||(I2CSTAT == mstRepStart))
  {
    I2C_WRITE(i2cAddr | RD_WRn);
  }

  return I2CSTAT;
}

/**************************************************************************************************
 * @fn          HalI2CInit
 *
 * @brief       Initialize the I2C bus as a Master.
 *
 * input parameters
 *
 * @param       address - I2C slave address.
 * @param       clockRate - I2C clock rate.
 *
 * output parameters
 *
 * None.
 *
 * @return      None.
 */
void HalI2CInit(i2cClock_t clockRate)
{
  I2C_WRAPPER_DISABLE();
  I2C_CLOCK_RATE(clockRate);
  I2C_ENABLE();
}

/**************************************************************************************************
 * @fn          HalI2CRead
 *
 * @brief       Read from the I2C bus as a Master.
 *
 * input parameters
 *
 * @param       len - Number of bytes to read.
 * @param       pBuf - Pointer to the data buffer to put read bytes.
 *
 * output parameters
 *
 * None.
 *
 * @return      The number of bytes successfully read.
 */
i2cLen_t HalI2CRead(i2cLen_t len, uint8 *pBuf)
{
  if (i2cMstStrt(I2C_MST_RD_BIT) != mstAddrAckR)
  {
    len = 0;
  }

  for (i2cLen_t cnt = 0; cnt < len; cnt++)
  {
    if((len-cnt)==1) // last byte
    {
      I2C_SET_NACK();
    }
    else
    {
      I2C_CLR_NACK();
    }
    
    I2C_READ(*pBuf++);
    if ((I2CSTAT != mstDataAckR)&&(I2CSTAT != mstDataNackR))
    {
      len=cnt;
      break;
    }

//    if (I2CSTAT != mstDataAckR)
//    {
//      if (I2CSTAT == mstDataNackR)
//      {
//        len = cnt + 1;
//      }
//      else
//      {
//        len = cnt;
//      }
//      break;
//    }
  }

  I2C_STOP();
  return len;
}

/**************************************************************************************************
 * @fn          HalI2CWrite
 *
 * @brief       Write to the I2C bus as a Master.
 *
 * input parameters
 *
 * @param       len - Number of bytes to write.
 * @param       pBuf - Pointer to the data buffer to write.
 *
 * output parameters
 *
 * None.
 *
 * @return      The number of bytes successfully written.
 */
i2cLen_t HalI2CWrite(i2cLen_t len, uint8 *pBuf, uint8 stop)
{
  if (i2cMstStrt(0) != mstAddrAckW)
  {
    len = 0;
  }

  for (i2cLen_t cnt = 0; cnt < len; cnt++)
  {
    I2C_WRITE(*pBuf++);

    if (I2CSTAT != mstDataAckW)
    {
      if (I2CSTAT == mstDataNackW)
      {
        len = cnt + 1;
      }
      else
      {
        len = cnt;
      }
      break;
    }
  }
  if(stop)
  {
    I2C_STOP();
  }
  return len;
}
//i2cLen_t HalI2CWriteNoStop(i2cLen_t len, uint8 *pBuf)
//{
//  if (i2cMstStrt(0) != mstAddrAckW)
//  {
//    len = 0;
//  }
//
//  for (i2cLen_t cnt = 0; cnt < len; cnt++)
//  {
//    I2C_WRITE(*pBuf++);
//
//    if (I2CSTAT != mstDataAckW)
//    {
//      if (I2CSTAT == mstDataNackW)
//      {
//        len = cnt + 1;
//      }
//      else
//      {
//        len = cnt;
//      }
//      break;
//    }
//  }
//
//  //I2C_STOP();
//  return len;
//}

void init_i2c(void)
{
  HalI2CInit(i2cClock_123KHZ);
}

void hardware_i2c_write(uint8 slave_addr, uint16 length, uint8 *data)
{
  init_i2c();
  if(i2c_status ==i2c_on)
  {
  i2cAddr = slave_addr ;
  HalI2CWrite(length, data,1);
  }
}

void hardware_i2c_read(uint8 slave_addr, uint8 reg_addr,uint16 length, uint8 *data)
{
  init_i2c();
  if(i2c_status==i2c_on)
  {
  i2cAddr = slave_addr ;
  uint8 regAddr = reg_addr;
  HalI2CWrite(1, &regAddr,0);
  HalI2CRead(length,data);
  }
  /*
  while(i2c.isBusy==1);
  i2c.isBusy = 1;
  
  i2c_buffer[i2c_buffer_write_index]=slave_addr;  // writing first
  i2c_buffer_write_index=index(i2c_buffer_write_index+1);
  i2c_buffer[i2c_buffer_write_index]=0;
  i2c_buffer_write_index=index(i2c_buffer_write_index+1);
  i2c_buffer[i2c_buffer_write_index]=1; // 1byte for reg_addr
  i2c_buffer_write_index=index(i2c_buffer_write_index+1);
  i2c_buffer[i2c_buffer_write_index]=reg_addr; // reg_addr
  i2c_buffer_write_index=index(i2c_buffer_write_index+1);
  
  i2c_buffer[i2c_buffer_write_index]=slave_addr|1;  // reading
  i2c_buffer_write_index=index(i2c_buffer_write_index+1);
  i2c_buffer[i2c_buffer_write_index]=length/256;
  i2c_buffer_write_index=index(i2c_buffer_write_index+1);
  i2c_buffer[i2c_buffer_write_index]=length%256;
  i2c_buffer_write_index=index(i2c_buffer_write_index+1);
  i2c_buffer_freespace-=7;
  i2c.data =data;
  i2c.i2c_action=i2c_read;
  
  //IEN2 |= IEN2_P2IE; // Enable interrupt from I2C by setting [IEN2.P2IE = 1].
  I2CCFG = (I2CCFG & ~I2CCFG_CR) | I2CCFG_CR_DIV_120 | I2CCFG_ENS1 | I2CCFG_AA | I2CCFG_STA;
  while(i2c.isBusy==1);
  */
}
#if 1
#pragma vector=I2C_VECTOR
__near_func __interrupt void I2C_ISR(void)
{
  switch (I2CSTAT)
  {
  case slvAddrAckR:
    {
      volatile uint8 ch;
      // Throw away these new bytes & leave old msg so no race with background HalI2CRead().
      I2C_SET_NACK();
      SLV_READ(ch);
      I2C_CLR_NACK();
    }

    //(void)i2cCB(i2cRxLen);  // Alert Application that a Master Tx is ready to read.
    break;

  case slvAddrAckW:
    if (1)//i2cCB(0) == FALSE)
    {
      I2C_SET_NACK();
      SLV_WRITE(0);
      I2C_CLR_NACK();
    }
    else
    {
      /* Slave will be clock-stretching, blocking master, until Application makes a HalI2CWrite().
       * While addressed as a slave, the I2C ISR keeps firing even though the I2CSTAT is not
       * changing and the flags are cleared below. So this special ISR disable here to be
       * re-enabled within the slave HalI2CWrite() function.
       */
      I2C_INT_DISABLE();
    }
    break;

  case i2cIdle:  // Not expected, but not really an error, so no need to execute a STOP.
    break;

  default:
    I2C_STOP();
    I2C_CLR_NACK();  // Setup to Ack the next time addressed.
    break;
  }

  // Clear the CPU interrupt flag for Port_2 PxIFG has to be cleared before PxIF.
  I2C_PXIFG = 0;
  I2C_IF = 0;
}
#else
#pragma vector=I2C_VECTOR
__near_func __interrupt void I2C_ISR(void)
{
  uint8 intState = EA;
  st( EA = 1; );
  // Clear I2C CPU interrupt flag.
  P2IF = 0;

  i2cstate=I2CSTAT;
  
  switch(i2cstate)
  {
    case 0x08:
    case 0x10:  // If a Start or Restart condition has been transmitted ...
      I2CDATA=i2c_buffer[i2c_buffer_read_index];    // Send Slave address and R/W access.
      
      i2c_buffer_read_index=index(i2c_buffer_read_index+1);
      i2c.length = i2c_buffer[i2c_buffer_read_index]*256;
      i2c_buffer_read_index=index(i2c_buffer_read_index+1);
      i2c.length += i2c_buffer[i2c_buffer_read_index];
      i2c_buffer_read_index=index(i2c_buffer_read_index+1);
      i2c_buffer_freespace+=3;
      
      I2CCFG &= ~I2CCFG_STA; // End Start condition.
      break;
    case 0x18:
    case 0x28:         //data sent and ack received
      if(i2c.length)  
      {
        uint8 next=i2c_buffer[i2c_buffer_read_index];
        i2c_buffer_read_index=index(i2c_buffer_read_index+1);
        i2c_buffer_freespace++;  
        i2c.length--;
        I2CDATA=next;
      }
      else   // finished transmitting...
      {
          if(i2c.i2c_action==i2c_write)
          {
            i2c.isBusy = 0;
            // Generate Stop condition.
            I2CCFG |= I2CCFG_STO;
            // Disable interrupt from I2C by setting [IEN2.I2CIE = 0].
            //IEN2 &= ~IEN2_P2IE;
          }
          else// read
          {
            I2CCFG |= I2CCFG_STO|I2CCFG_STA; //repeat start
          }
      }
      break;
    case 0x30:   // data sent without ack
      if(i2c.length)  
      {
        uint8 next=i2c_buffer[i2c_buffer_read_index];
        i2c_buffer_read_index=index(i2c_buffer_read_index+1);
        i2c_buffer_freespace++;  
        i2c.length--;
        I2CDATA=next;
      }
      else   // finished transmitting...
      {
          i2c.isBusy = 0;
          I2CCFG |= I2CCFG_STO;
      }
      break;
    case 0x40:  // SLA+R has been transmitted;
      if(i2c.length>1)
      {
        I2CCFG |=I2CCFG_AA;  // acknowledge returned. multi read;
      }
      else
      {
        I2CCFG &=~I2CCFG_AA;  // no acknowledge returned. Last byte read;
      }
      break;
    case 0x50:     // data received and ack sent to slave
      i2c.length--;
      *i2c.data=   I2CDATA;
      i2c.data++;
      if(i2c.length==1)
        I2CCFG &=~I2CCFG_AA;  // no acknowledge returned. Last byte read;
      else
        I2CCFG |=I2CCFG_AA;  // acknowledge returned. multi read;
      break;
    case 0x58: // data received without acknowledge. last byte read
      i2c.length--;
      *i2c.data=   I2CDATA;
      i2c.data++;
      
      if(i2c_buffer_freespace==i2c_buffer_size)
      {
        i2c.isBusy = 0;
        // Generate Stop condition.
        I2CCFG |= I2CCFG_STO;
      }
      else
      {
        I2CCFG |= I2CCFG_STO|I2CCFG_STA;
      }
      break;
    default:
      break;
  }
  // I2CCFG.SI flag must be cleared by software at the end of the ISR.
  I2CCFG &= ~I2CCFG_SI;

  EA = intState;
}

#endif


