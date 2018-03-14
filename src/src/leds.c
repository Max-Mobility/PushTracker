#include "leds.h"
#include <blestack/hw.h>


uint16 led_red_count =0;
uint16 led_green_count =0;
uint16 led_blue_count =0;
uint16 led_blue2_count =0;


void set_led(enum led_color color, enum led_on_off on_off)
{
  switch(color)
  {
  case green:
    {
      P2_0=on_off;
    }
    break;
  case red:
    {
      P0_5=on_off;
    }
    break;
  case blue:
    {
      P1_7=on_off;
    }
    break;
  case blue2:
    {
      P1_6=on_off;
    }
    break;
  }

}

enum led_on_off check_led(enum led_color color)
{
  enum led_on_off _led_status;
  
  switch(color)
  {
  case green:
    {
      _led_status=( enum led_on_off)P2_0;
    }
    break;
  case red:
    {
      _led_status=( enum led_on_off)P0_5;
    }
    break;
  case blue:
    {
      _led_status=( enum led_on_off)P1_7;
    }
    break;
  case blue2:
    {
      _led_status=( enum led_on_off)P1_6;
    }
    break;
  }
  return _led_status;

}

void set_led_all(enum led_on_off on_off)
{
  set_led(green,on_off);
  set_led(red,on_off);
  set_led(blue,on_off);
  set_led(blue2,on_off);
}

void set_RGB_off()
{
  set_led(green,led_off);
  set_led(red,led_off);
  set_led(blue,led_off);
 
}

void init_leds(void)
{
  led_red_count =0;
  led_green_count =0;
  led_blue_count =0;
  led_blue2_count =0;
  set_led_all(led_off);
}

void led_toggle(enum led_color color)
{
 switch(color)
  {
  case green:
    {
      P2_0=!P2_0;
    }
    break;
  case red:
    {
      P0_5=!P0_5;
    }
    break;
  case blue:
    {
      P1_7=!P1_7;
    }
    break;
  case blue2:
    {
      P1_6=!P1_6;
    }
    break;
  }
}