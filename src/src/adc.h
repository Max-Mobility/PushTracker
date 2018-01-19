#ifndef ADC_INCLUDE_GUARD_
#define ADC_INCLUDE_GUARD_
#ifndef ADC_H
#define ADC_H

#include <blestack/hw.h>

#define BATTERY_ADC_INPUT      0x06
#define BATTERY_ADC_DECIMATION 0x03
#define BATTERY_ADC_REF        0x02

extern uint16 adc_result;

void init_adc(void);

void start_adc(uint8 input, uint8 decimation ,uint8 voltRef);



#pragma vector=ADC_VECTOR
__interrupt void adc_isr (void);



















#endif
#endif //ADC_INCLUDE_GUARD_