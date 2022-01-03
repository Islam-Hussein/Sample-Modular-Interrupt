#include "EXT_INT.h"
#include "LED.h"
#include <avr/interrupt.h>

int main(void)
{
	ExternalINT0_Init();
	
	LED0_Init();
	
	while(1)
	{
		
		
		
	}
}


ISR(INT0_vect)
{
	cli();
	LED0_Toggle();
	sei();
}