#include "main.h" 
#include "..\lib\delay.h"
#include "..\lib\LCD4.h"
void main() {
	unsigned int t,f; 
	Lcd_Init(); 
	Lcd_Out(1,1,"T = "); 
	Lcd_Out(2,1,"f = "); 
	TMOD  &= 0xF0; 
	TMOD |= 0x09; // gATE = 1, MO = 1; 
	
while (1){
	
	TH0 = 0; 
	TL0 = 0;
	while(INT0);// bo qua muc 1 dau tien 
	while(!INT0); // bo qua muc 0
	TR0 = 1; 
	
while (INT0);
	TR0 = 0; 
	t = TH0;
	t <<= 8; 
	t |= TL0; 
	Lcd_Chr(1,5,t/10000+0x30);
	Lcd_Chr_Cp(t%10000/1000+0x30);
		Lcd_Chr_Cp(t%10000/100+0x30);
		Lcd_Chr_Cp(t%10000/10+0x30);
	Lcd_Chr_Cp(t%10+0x30);
	f = 1000000/t/2; 
	Lcd_Chr(2,5,f/10000+0x30);
	Lcd_Chr_Cp(f%10000/1000+0x30);
		Lcd_Chr_Cp(f%10000/100+0x30);
		Lcd_Chr_Cp(f%10000/10+0x30);
	Lcd_Chr_Cp(f%10+0x30);
	
	}
	}