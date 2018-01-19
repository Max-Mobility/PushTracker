#ifndef ACC_INCLUDE_GUARD_
#define ACC_INCLUDE_GUARD_

#ifndef ACC_H
#define ACC_H
#include<blestack/hw.h>

enum acc_on_off
{
  acc_on =0,
  acc_off = 1
};

extern uint8 acc[8];
extern uint8 acc_data[8];
void enable_acc(enum acc_on_off on_off);
void init_acc(void);
void acc_stop(void);
void acc_start(void);
void acc_set_tap(float sens);
#define acc_addr 0x38
#define acc_pulse_src_addr 0x22
#define acc_int_source 0x0c
#define acc_PL_STATUS 0x10

#endif
#endif //ACC_INCLUDE_GUARD_