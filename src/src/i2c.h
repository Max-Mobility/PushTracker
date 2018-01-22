#ifndef I2C_INCLUDE_GUARD_
#define I2C_INCLUDE_GUARD_

#include <blestack/hw.h>
#include "ioCC2541_bitdef.h"   
#include <ioCC2541.h>

enum i2c_on_off
{
  i2c_on =1,
  i2c_off = 0
};

extern enum i2c_on_off i2c_status;
enum i2c_write_read
{
  i2c_read=0x01,
  i2c_write=0x00
};


void enable_i2c(enum i2c_on_off on_off);

void init_i2c(void);

typedef struct {
    uint8 slave_address;
    uint8 *data;
    uint16   length;
    enum i2c_write_read i2c_action;
    uint8 isBusy;
} i2c_info;

extern i2c_info i2c;


void hardware_i2c_write(uint8 slave_addr, uint16 length, uint8 *data);

void hardware_i2c_read(uint8 slave_addr, uint8 reg_addr,uint16 length, uint8 *data);


#pragma vector = I2C_VECTOR
__interrupt void I2C_ISR(void);

#endif //I2C_INCLUDE_GUARD_