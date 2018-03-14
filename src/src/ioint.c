#include "ioint.h"


#include "leds.h"
#include "ble.h"
#include "globals.h"
#include "motor.h"
#include "acc.h"
#include "i2c.h"




void init_io_int(void)
{
  //***********GPIO**************
  P0DIR = 0XA8;
  P0_4=1;  // SET FLOATING PIN TO HIGH
  P1DIR |= 0XCE;
  P2DIR |= 0X01;

  //**********INTERRUPT***********
  P0IEN = BIT(0)|BIT(1)|BIT(2);    // ENABLE INTERRUPT
  P1IEN = BIT(0)|BIT(4)|BIT(5);     // ENABLE INTERRUPT
  PICTL |=BIT(0)|BIT(1)|BIT(2);       // ALL FALLING EDGE TRIGGER

  P0IFG=0;
  P1IFG=0;
  P0IF=0;
  P1IF=0;
  P0IE=1;
  IEN2|=IEN2_P1IE;
  
}

void InputTest(void)
{
  if ((P1 & BTN1) == 0) 
  {
    standby_time ++;
    hold = -1;
  }
  else
  {
    if (standby_time == 0) 
      standby_time = 1;
    
    hold = standby_time;
    standby_time = 0;
  }
  if (standby_time > 0) 
  {
    if (standby_time < 30)
    {
      
      set_led(red, led_off);
      set_led( green, led_off);
      set_led( blue, led_on);
    }
    else
    {
      if (standby_time >= 30 && standby_time < 60) 
      {
        set_led( red, led_off);
        set_led( blue, led_off);
        set_led( green, led_on);
      }
      else
      {
        set_led( green, led_off);
        set_led( blue, led_off);
        set_led( red, led_on);
      }
    }
  }
  else
  {
    set_led_all(led_off);
  }
}


#pragma vector = P0INT_VECTOR
__interrupt void p0_ISR(void)    // int1 int2 rtc
{
  if(P0IFG & INT1)
  {
    
    if(sysInitDone && (systemSleeping==0))
    {
//      tap=1;
//      //hardware_i2c_read(acc_addr,acc_pulse_src_addr,1,acc_data);
//      
//      if(acc_data[0]&8)// doulbe tap
//      {
//        set_led( blue, led_off);
//        set_led( red, led_on);
//        data_temp[0]=DU_data_tpye_Command;
//        data_temp[1]=DU_command_DoubleTap;
//               
//      }
//      else
//      {
//        set_led( blue, led_on);
//        set_led( red, led_off);
//        data_temp[0]=DU_data_tpye_Command;
//        data_temp[1]=DU_command_Tap;
//   
//      }
//     if(connected&connection_du)
//     {
//       if(LookingForService_state==STATE_STANDBY)
//      {
//        setLookingForService_state(STATE_SENDING_DATA);
//        gatt_write_attribute(connection_handle_du, att_handle_data,data_temp,2);
//      }
//      else
//      {
////        gatt_write_attribute_prepare(connection_handle_du, att_handle_data,data_temp,2);
//      }
//     
      task_send_msg((enum task_id)task_id_AccInt_handler,0,acc_tap);
    }
    
    P0IFG &= ~INT1;
  }
  if(P0IFG &INT2)
  {
   // if(sysInitDone && (systemSleeping==0)&&(push_debounce==0)&&( motorStatus == motor_off))
    //{
      
     // push_debounce = 1;
      task_send_msg((enum task_id)task_id_AccInt_handler,0,acc_push);
    //}
    P0IFG&=~INT2;
  }
  if(P0IFG&INT_RTC)
  {
    //pushes=0;
    task_send_msg((enum task_id)task_id_AccInt_handler,0,rtc_daily);
    P0IFG&=~INT_RTC;
  }

  
  
  
  P0IF=0;
}




#pragma vector = P1INT_VECTOR
__interrupt void p1_ISR(void)  //btn1 btn2 charging
{
  if(P1IFG & BTN1)
  {
    //set_led(red, led_on);
   // scanning_start();
    
    //btn_left=1;
    if(btn_left_debounce==0)
    {
      btn_left_debounce=1;
      set_led(blue2,led_on);
      task_send_msg((enum task_id)task_id_Delay_handler,btn_press,BtnIntEvent_Left);
    }
    P1IFG&=~BTN1;
  }
  if(P1IFG &BTN2)
  {
    //btn_right=1;
    //if(connected&connection_du)
    //{
    //  package_id++;
    //  data_temp[0]=(package_id&0x3F)|0x40;
    //  gatt_write_attribute(connection_handle_du, att_handle_data,data_temp,1);
	//
    //}
    if(btn_right_debounce==0)
    {
      
      btn_right_debounce=1;
      set_led(blue2,led_on);
    task_send_msg((enum task_id)task_id_Delay_handler,btn_press,BtnIntEvent_Right);
    }
//    set_led(red,led_off);
//    ble_radio_state=Radio_off;
//    scanning_stop();
//    disconnect_device();
    
    
    
    P1IFG&=~BTN2;
  }
  if(P1IFG&INT_CHARGING)
  {
  	//hw_reset(0);
    P1IFG&=~INT_CHARGING;
  }


  P1IF=0;
}