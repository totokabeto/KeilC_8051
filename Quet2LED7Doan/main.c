#include "main.h" 
#include "..\lib\delay.h"
#define LED_PORT P3 
unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
sbit LED1_PIN = P2^0; 
sbit LED2_PIN = P2^1; 
void main() {
while (1){
	LED_PORT = Code7Seg[1]; 
	LED1_PIN = 0; 
	delay(500);
	LED1_PIN = 1; 
	
	LED_PORT = Code7Seg[2]; 
	LED2_PIN = 0; 
	delay(500);
	LED2_PIN = 1; 
	}
	}