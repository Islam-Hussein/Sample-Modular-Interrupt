#ifndef  ADC_H_
#define  ADC_H_

#include "ATMEGA32_REGISTERS.h"
#include "STD_MATH.h"
#include "ADC_Cfg.h"


#define  ADC_VREFF_AVCC        0

#define  ADC_CHANNEL_1         1

#define  ADC_AUTO_TRIGGER      0

#define  ADC_PRESCALER_128     0

#define ADC_INTERRUPT_ENABLE   0

#define ADC_INTERRUPT_DISABLE  1

#define ADC_RIGHT_ADJUST       0


void ADC_Init(void);

void ADC_Read(uint16* value);


#endif