/***************************** EXT_INT *********************/

#define SREG    (*(volatile uint8*)(0x5F))

#define MCUCR   (*(volatile uint8*)(0x55))

#define MCUCSR  (*(volatile uint8*)(0x54))

#define GICR    (*(volatile uint8*)(0x5B))

#define GIFR    (*(volatile uint8*)(0x5A))

/***********************************************************/