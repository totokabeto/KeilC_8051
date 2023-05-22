#include "main.h" 
#include "..\lib\delay.h"
#include "..\lib\KeyPad4x4.h"

#define LED_PORT P2 
sbit LED1 = P3^0; 
sbit LED2 = P3^1; 
unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
void main() {
	unsigned char key, tmp; 
while (1){
	key = KeyPress(); 
	if (key != 0){
	tmp = key; 
}
LED_PORT = Code7Seg[tmp/10]; 
LED1 = 0; 
delay(1); 
LED1 = 1; 
LED_PORT = Code7Seg[tmp%10]; 
LED2 = 0; 
delay(1); 
LED2 = 1; 


	
	}
	}