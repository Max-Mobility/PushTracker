#include "motor.h"
#include "globals.h"

enum motor_on_off motorStatus;
enum motor_on_off VMotorStatus = motor_off;
void set_motor(enum motor_on_off on_off)
{
  
    P0_7=on_off;
}

void init_motor()
{
  set_motor(motor_off);  


}



void vibrate_motor(uint8 vibration)
{
  task_send_msg((enum task_id)task_id_Vmotor_handler,first_on,vibration);

}