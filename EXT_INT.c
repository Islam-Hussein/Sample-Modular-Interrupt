

#include "EXT_INT.h"






void SET_GlobalInterrupt(void)
{
	#if  GLOBAL_INTERRUPT   ==  GLOBAL_INTERRUPT_ENABLE
	
	SET_BIT(SREG,7);
	
	#elif  GLOBAL_INTERRUPT   ==  GLOBAL_INTERRUPT_DISABLE
	
	CLR_BIT(SREG,7);
	
	#enif
}

void ExternalINT0_INIT(void)
{
	SET_GlobalInterrupt(void);
	SET_BIT(GICR,EXTERNAL_INT0);
	
	#if     EXTERNAL_INT0_TRIGGER == INT0_TRIGGER_RISING_EDGE
	
	SET_BIT(MCUCR , 0);
	SET_BIT(MCUCR , 1);
	
	#elif   EXTERNAL_INT0_TRIGGER == INT0_TRIGGER_FALLING_EDGE
	
	CLR_BIT(MCUCR , 0);
	SET_BIT(MCUCR , 1);
	
	#elif   EXTERNAL_INT0_TRIGGER == INT0_TRIGGER_LOW_LEVEL
	CLR_BIT(MCUCR , 0);
	CLR_BIT(MCUCR , 1);
		
	#elif   EXTERNAL_INT0_TRIGGER == INT0_TRIGGER_ANY_LOGICAL_CHANGE
	
	SET_BIT(MCUCR , 0);
	CLR_BIT(MCUCR , 1);
	
	#endif
	
}

void ExternalINT1_INIT(void)
{
	SET_GlobalInterrupt(void);
	
	SET_BIT(GICR , EXTERNAL_INT1);
	
	#if     EXTERNAL_INT1_TRIGGER == INT1_TRIGGER_RISING_EDGE
	
	SET_BIT(MCUCR , 2);
	SET_BIT(MCUCR , 3);
	
	#elif   EXTERNAL_INT1_TRIGGER == INT1_TRIGGER_FALLING_EDGE
	
	CLR_BIT(MCUCR , 2);
	SET_BIT(MCUCR , 3);
	
	#elif   EXTERNAL_INT1_TRIGGER == INT1_TRIGGER_LOW_LEVEL
	CLR_BIT(MCUCR , 2);
	CLR_BIT(MCUCR , 3);
		
	#elif   EXTERNAL_INT1_TRIGGER == INT1_TRIGGER_ANY_LOGICAL_CHANGE
	
	SET_BIT(MCUCR , 2);
	CLR_BIT(MCUCR , 3);
	
	#endif
	
}

void ExternalINT2_INIT(void)
{
	SET_GlobalInterrupt(void);
	
	SET_BIT(GICR , EXTERNAL_INT2);
	
	#if     EXTERNAL_INT2_TRIGGER == INT2_TRIGGER_RISING_EDGE
	
	SET_BIT(MCUCR , 6);
	
	#elif   EXTERNAL_INT2_TRIGGER == INT2_TRIGGER_FALLING_EDGE
	
	CLR_BIT(MCUCR , 6);

	#endif	
	
	
}