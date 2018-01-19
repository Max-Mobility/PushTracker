#include "Timer1.h"

#include<blestack/hw.h>
#include "ioCC2541_bitdef.h"


void timer1_init()
{

    // Clear Timer 1 channel 0 interrupt flag.
    // CPU interrupt flag (IRCON) for Timer 1 is cleared automatically by hardware.
    T1STAT = ~T1STAT_CH0IF;

    // Set individual interrupt enable bit in the peripherals SFR.
    T1CCTL0 |= T1CCTLn_IM;      // Enable interrupt on channel 0.
    T1CCTL1 &= ~T1CCTLn_IM;     // Disable interrupt on channel 1.
    T1CCTL2 &= ~T1CCTLn_IM;     // Disable interrupt on channel 2.
    T1CCTL3 &= ~T1CCTLn_IM;     // Disable interrupt on channel 3.
    T1CCTL4 &= ~T1CCTLn_IM;     // Disable interrupt on channel 4.
    T1OVFIM = 0;                // Disable overflow interrupt.

    // Enable Timer 1 interrupts by setting [IEN1.T1IE=1].
    T1IE = 1;

    // Enable global interrupt by setting the [IEN0.EA=1].
    EA = 1;
  
  	T1CCTL0 = (T1CCTL0 & ~T1CCTLn_CMP) | T1CCTLn_CMP_TOG_ON_CMP | T1CCTLn_MODE;

    // Set compare register of channel 0 to 32767 ( 0xFFFF / 2 ).
    T1CC0L = 0xFF;
    T1CC0H = 0x7F;

    // Set prescaler divider value to 32 to get a tickspeed of 500 kHz and
    // set Timer 1 to free running mode.
    
  
  
  
  
}
void set_timer(uint16 delay)
{
	T1CTL = (T1CTL & ~(T1CTL_MODE | T1CTL_DIV)) | T1CTL_MODE_FREERUN | T1CTL_DIV_32;
}
#pragma vector = T1_VECTOR
__interrupt void timer1_ISR(void)
{
  T1STAT = ~T1STAT_CH2IF;	
  
}