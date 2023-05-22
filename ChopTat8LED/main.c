#include "main.h" 
#include "..\lib\delay.h"
#define LED_PORT P2
void main() {
	LED_PORT = 0x55; 
while (1){
	LED_PORT= ~LED_PORT; 
	delay(500);
	}
	}