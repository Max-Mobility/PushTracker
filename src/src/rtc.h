#ifndef RTC_INCLUDE_GUARD_
#define RTC_INCLUDE_GUARD_
#include "globals.h"
#include <blestack/hw.h>

extern uint8 reset_rtc;
extern uint8 rtc_data[9];
extern uint8 rtc_d_len;
extern uint8 handle5_counter;

void rtc_init         (void);
void set_rtc_alarm    (void);
void clear_rtc_int    (void);
void set_rtc          (void);
void read_rtc         (void);
uint32 get_systemTime (void);
#endif //RTC_INCLUDE_GUARD_