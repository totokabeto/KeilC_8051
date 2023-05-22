#include "main.h" 
#include "..\lib\delay.h"
#define LED_PORT P2
unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
sbit LED1_PIN = P3^0;
sbit LED2_PIN = P3^1;
unsigned int i; 

void main() {
	unsigned char dem; 
	unsigned char chuc, dvi; 
while (1){
	for (dem = 0; dem < 100; dem++){
chuc = dem/10; 
dvi = dem%10; 
		for(i = 0; i < 500; i++){
		LED_PORT = Code7Seg[chuc]; 
		LED1_PIN = 0; 
		delay(1); 
		LED1_PIN = 1; 
		
		LED_PORT = Code7Seg[dvi]; 
		LED2_PIN = 0; 
		delay(1); 
		LED2_PIN = 1; 
		}
}
	}
	}