#include "main.h" 
#include "..\lib\delay.h"
#include "port.h" 
void main() {
	IT1 = 1; 
	EX1 = 1; 
	EA= 1; // CHO PHEP NGAT TOAN CUC 
	
	LED0 = LED1 = LED2 = LED3 = 0; 
	
while (1){
	
	PCON |= 0x01; 
	}
	}
void EX1_ISR (void) interrupt 2{
Delay_ms(20); 
	if (!BTN0){
LED0 = !LED0; 
		while (!BTN0);
	}
		if (!BTN1){
LED2 = !LED2; 
		while (!BTN1);
	}
		if (!BTN2){
LED2 = !LED2; 
		while (!BTN2);
	}
		if (!BTN3){
LED3 = !LED3; 
		while (!BTN3);
	}

}
