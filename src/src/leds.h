#ifndef LEDS_INCLUDE_GUARD_
#define LEDS_INCLUDE_GUARD_

#include <blestack/hw.h>
extern uint16  led_red_count ;
extern uint16  led_green_count ;
extern uint16  led_blue_count ;
extern uint16  led_blue2_count ;

enum led_color
{
  green = 0,
  red = 1,
  blue = 2, 
  blue2 = 3
};

enum led_on_off
{
  led_on =0,
  led_off = 1
};

void set_led(enum led_color color, enum led_on_off on_off);

void set_led_all(enum led_on_off on_off);

void init_leds(void);

void set_RGB_off();

void led_toggle(enum led_color color);
enum led_on_off check_led(enum led_color color);

#endif //LEDS_INCLUDE_GUARD_