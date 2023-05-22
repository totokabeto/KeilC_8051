#include "main.h" 
#include "..\lib\delay.h"

void Uart_Mode0_Write(unsigned char b){
	SBUF = 0x01; 
	while (TI == 0);
	TI = 0; 
	P3_2 = 0; 
	P3_2 = 1;
}

void main() {
		SM0 = SM1 = 0; 
while (1){
	Uart_Mode0_Write(0x00);
	Delay_ms(500);
	Uart_Mode0_Write(0xFF);

	
	}
	}