#ifndef IOINT_INCLUDE_GUARD_
#define IOINT_INCLUDE_GUARD_

#ifndef IOINT_H
#define IOINT_H
#include "ioCC2541_bitdef.h"
#include <blestack/hw.h>

#define BTN1 0x20
#define BTN2 0x10
#define INT_RTC 0X04
#define INT1 0X01
#define INT2 0X02
#define INT_CHARGING 0x01
void init_io_int(void);

void InputTest(void);
#pragma vector = P0INT_VECTOR
__interrupt void p0_ISR(void);

#pragma vector = P1INT_VECTOR
__interrupt void p1_ISR(void);



#endif

#endif //IOINT_INCLUDE_GUARD_