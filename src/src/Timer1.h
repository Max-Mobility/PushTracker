#ifndef TIMER1_INCLUDE_GUARD_
#define TIMER1_INCLUDE_GUARD_
#ifndef TIMER1_INCLUDE_GUARD_
#define TIMER1_INCLUDE_GUARD_
#include<blestack/hw.h>
void timer1_init();
void set_timer(uint16 delay);
#pragma vector = T1_VECTOR
__interrupt void timer1_ISR(void);
#endif //TIMER1_INCLUDE_GUARD_
#endif //TIMER1_INCLUDE_GUARD_