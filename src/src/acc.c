#include "acc.h"
#include "acc.h"
#include "i2c.h"
#include "globals.h"


uint8 acc[8];
uint8 acc_data[8];



void enable_acc(enum acc_on_off on_off)
{
    P0_3=on_off;
  
      if(on_off==acc_on)
    {
      EA = 0;
      P0IEN |= BIT(0)|BIT(1);
      P0DIR &= ~(BIT(0)|BIT(1));
      EA = 1;
    }
    else
    {
      EA=0;
      P0IEN &=~(BIT(0)|BIT(1));
      P0DIR |= BIT(0)|BIT(1);
      P0 &=~(BIT(0)|BIT(1));
      EA=1;
    }
    
    
}

void init_acc(void)
{
	acc[0]=0x2a; //CTRL_REG1 address
	acc[1]=0x08;  //400hz standby mode
	hardware_i2c_write(0x38,2,acc);
	
	acc[0]=0x0E; //data cfg
	acc[1]=0x11;  //set for 4g  & hp_out
	hardware_i2c_write(0x38,2,acc);
				 
	acc[0]=0x21; 
	acc[1]=0x70;  //enable tap z detection both single and double tap  ( &event flag latch  enable)
	hardware_i2c_write(0x38,2,acc);
		
	acc[0]=0x25;
	acc[1]=35;  //set threshold to 2.0g=32
	hardware_i2c_write(0x38,2,acc);
		
	acc[0]=0x26; 
	acc[1]=48;  //set time steps =60ms
	hardware_i2c_write(0x38,2,acc);
		 
	acc[0]=0x27; 
	acc[1]=80;  //set time latency 200ms
	hardware_i2c_write(0x38,2,acc);
	
	acc[0]=0x28; 
	acc[1]=255;  //set window 300ms  120*2.5ms
	hardware_i2c_write(0x38,2,acc);
					
	acc[0]=0x1D; 
	acc[1]=0x06;  //transient x & y
	hardware_i2c_write(0x38,2,acc);
					
	acc[0]=0x1F;
	acc[1]=0x84;  //0.2g  increments or clear counter
	hardware_i2c_write(0x38,2,acc);
		
	acc[0]=0x20;
	acc[1]=0x14;  //20 points=50ms
	hardware_i2c_write(0x38,2,acc);
					
	acc[0]=0x2d;
	acc[1]=0x38;  //enable interrupt for transient and tap and Landscape/portrait 
	hardware_i2c_write(0x38,2,acc);
					
	acc[0]=0x2e; 
	acc[1]=0x08;  // tap interrupt connect to int1, transient to int2
	hardware_i2c_write(0x38,2,acc);	
		
	acc[0]=0x0F;
	acc[1]=0x00;  // High Pass filter enable LPF disable
	hardware_i2c_write(0x38,2,acc);
	
  	acc[0] = 0x13; // back/front Zlock threshold setting
  	acc[1]=	0x00;	//zlock =14 deg back/front = 80/280   100/260
  	hardware_i2c_write(0x38,2,acc);
  
  	acc[0] = 0x12; // counter
  	acc[1]=	50;	//counter=2.5*200 ms
  	hardware_i2c_write(0x38,2,acc);
  
  	acc[0] = 0x11; // PL config
  	acc[1]=	(1<<7)|(1<<6);	//clear counter and enable PL detection
  	hardware_i2c_write(0x38,2,acc);
	 //acc[0]=0x11;
	 //acc[1]=0xC0;  //enable PL detection
	 //hardware_i2c_write(0x38,2,acc);
	
	 //acc[0]=0x12;
	 //acc[1]=0x08;  //PL debounce time @100hz
	 //hardware_i2c_write(0x38,2,acc);
	
	 //acc[0]=0x14;
	 //acc[1]=0x80;  //PL threshold 45deg
	 //hardware_i2c_write(0x38,2,acc);
		
	acc[0]=0x2a; //CTRL_REG1 address
	acc[1]=0x09;  //enable accelerometer, set 400hz
	hardware_i2c_write(0x38,2,acc);
  	acc_set_tap(SDSettings.tapSensitivity);
}

void acc_stop(void)
{
	acc[0]=0x2a; //CTRL_REG1 address
	acc[1]=0x08;  //400hz standby mode
	hardware_i2c_write(0x38,2,acc);
}
void acc_start(void)
{
	acc[0]=0x2a; //CTRL_REG1 address
	acc[1]=0x09;  //enable accelerometer, set 400hz
	hardware_i2c_write(0x38,2,acc);

}
void acc_set_tap(float sens)
{
  	acc_stop();
	uint8 acc_sens= 64- (uint8)(sens*30.0f);
  	acc[0]=0x25;
	acc[1]=acc_sens;  //set threshold to 2.2g=35  25=1.4g  45=2.6g
	hardware_i2c_write(0x38,2,acc);
  	acc_start();
}