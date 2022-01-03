void LCD_WriteInt(sint32 intg)
{
	sint32 y = 1;
	
	if(intgr < 0)
	{
		LCD_WriteChar('-');
		num *= -1;
	}
	
	while (intgr > 0)
	{
	y = ((y*10)+(intgr%10));
	intgr /= 10;
	}
	
	while (y > 1)
	{
		LCD_WriteChar((y%10) +48);
		y /= 10;
	}
}
