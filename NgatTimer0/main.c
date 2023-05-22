#include "main.h" 
#include "..\lib\delay.h"
unsigned char cnt = 10; 
void main() {
	unsigned char i;
	TMOD &= 0xF0; 
	TMOD |= 0x01; 
	
	TH0 = 0x3C; 
	TL0 = 0xB0; 
	
	ET0 = 1; // cho phep ngat timer0 
	EA =1; // cho phep ngat toan cuc
	
	TR0 = 1; // cho phep timer0 hoat dong
while (1){
	P1 = 0x00; 
	Delay_ms(100); 
	for (i = 0;i < 8; i++){
	P1 <<=1; 
	P1 |= 0x01; 
	Delay_ms(100);
	}
	}
	}
void Timer0Overflow(void) interrupt 1 {
	// nap lai gia tri cho TH0 va TL0 
TH0 = 0x3C; 
TL0 = 0xB0; 
cnt--; 
	if (cnt == 0){
	cnt = 10; 
	// User code 
	P2 = ~P2; 
	}

}