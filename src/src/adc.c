#include "adc.h"
#include "adc.h"
#include "globals.h"
#include "ioCC2541_bitdef.h"
#include "pstore.h"

uint16 adc_result=0;
uint16 adc_temp = 0;
uint32 bat_voltage = 412;
uint32 batCali = 300;

void init_adc(void)
{
  ADCCON1|=ADCCON1_STSEL_ST;
  //  ADCCON2|=(input&0x0F)|(voltRef&0x03)<<5|(decimation&0x03)<<3;
  APCFG|=APCFG_APCFG6;   // chose p0_6 as adc input
  ADCIE = 1;  //enable adc interrupt

  IP1&=~IP1_IPG1; // SET INTERRUPT GROUP 1 TO PRIORITY 1
  IP0|=IP0_IPG1;

}
void start_adc(uint8 input, uint8 decimation ,uint8 voltRef)
{
  //      ADCCON1 |= ADCCON1_ST;
  ADCCON3|=(input&0x0F)|(voltRef&0x03)<<6|(decimation&0x03)<<4;
  //     ADCCON3=0xB6;
}

#pragma vector=ADC_VECTOR
__interrupt void adc_isr (void)
{

  adc_result = (ADCL >>4);
  adc_result |=  (ADCH << 4);
  //    adc_result=adc_temp>>2;
  asm("NOP");

  
  bat_voltage =(bat_voltage*14+ adc_result)/15;  
  if((bat_voltage>batCali)&&adc_stable)
  {
  	batCali=bat_voltage;
    ps_save_batCali();
  }
  
  if (bat_voltage <(batCali-65))
    battery = 5;
  else {
    if (bat_voltage < (batCali-43)) 
      battery = 5+(bat_voltage-(batCali-65))*5/22;
      //battery = 10;
    else {
      if (bat_voltage < (batCali-25)) 
        battery = 10+(bat_voltage-(batCali-43))*30/13;
        //battery = 40;
      else {
        if (bat_voltage < (batCali-20))
          battery = 40+(bat_voltage-(batCali-25))*4;
          //battery = 60;
        else {
          if (bat_voltage < (batCali-15))
            battery = 60+(bat_voltage-(batCali-20))*2;
            //battery = 80;
          else {
            if (bat_voltage < (batCali-5))
              battery = 80+(bat_voltage-(batCali-15));
              //battery = 90;
            else {
              if (bat_voltage < (batCali))
                battery = 90+(bat_voltage-(batCali-5));
                //battery = 95;
              else
                battery = 100;
            }
          }
        }
      }
    }
  }
  if(battery<10)
    battery = 0;
  else
    battery = (battery-10)*5/4;
  
  if (battery>100)
    battery = 100;
  
}
