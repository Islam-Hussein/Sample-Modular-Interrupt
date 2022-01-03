/****************************** ADC **************************************/

#define  ADMUX        (*(volatile uint8 *)(0x27)) 

#define  ADCSRA       (*(volatile uint8 *)(0x26)) 

#define  ADCH         (*(volatile uint8 *)(0x25)) 

#define  ADCL         (*(volatile uint8 *)(0x24)) 

#define  ADC_Adjust   (*(volatile uint16*)(0x24)) 

#define  SFIOR        (*(volatile uint8 *)(0x50)) 
