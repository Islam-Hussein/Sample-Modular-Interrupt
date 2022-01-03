#ifndef EXT_INT_H_
#define EXT_INT_H_

#include "ATMEGA32_REGISTERS.h"
#include "BIT_MATH.h"
#incldue "EXT_INT_Cfg.h"


#define   GLOBAL_INTERRUPT_ENABLE     1
#define   GLOBAL_INTERRUPT_DISABLE    0


#define   EXTERNAL_INT0               6
#define   EXTERNAL_INT1               5
#define   EXTERNAL_INT2               4

#define   INT0_TRIGGER_LOW_LEVEL               0
#define   INT0_TRIGGER_RISING_EDGE             1
#define   INT0_TRIGGER_FALLING_EDGE            2
#define   INT0_TRIGGER_ANY_LOGICAL_CHANGE      3

#define   INT1_TRIGGER_LOW_LEVEL               0
#define   INT1_TRIGGER_RISING_EDGE             1
#define   INT1_TRIGGER_FALLING_EDGE            2
#define   INT1_TRIGGER_ANY_LOGICAL_CHANGE      3

#define   INT2_TRIGGER_RISING_EDGE             0
#define   INT2_TRIGGER_FALLING_EDGE            1




void SET_GlobalInterrupt(void);

void ExternalINT0_INIT(void);

void ExternalINT1_INIT(void);

void ExternalINT2_INIT(void);



#endif
