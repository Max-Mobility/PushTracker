#ifndef MOTOR_INCLUDE_GUARD_
#define MOTOR_INCLUDE_GUARD_
#ifndef MOTOR_H
#define MOTOR_H
#include <blestack/hw.h>


enum motor_on_off
{
  motor_on =1,
  motor_off = 0,
  motor_error=2
};

extern enum motor_on_off motorStatus;
extern enum motor_on_off VMotorStatus;

void set_motor(enum motor_on_off on_off);


void init_motor();


void vibrate_motor(uint8 vibration);


#endif
#endif //MOTOR_INCLUDE_GUARD_