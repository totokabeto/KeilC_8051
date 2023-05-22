#include "main.h" 
#include "..\lib\delay.h"

sbit DEN_DO = P0^0;
sbit DEN_VANG = P0^1;
sbit DEN_XANH = P0^2;

#define LED_CHUC P2
#define LED_DVI P3 
unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};


void main() {
	signed char i; 
	DEN_DO = 0; 
	DEN_VANG = 0; 
	DEN_XANH = 0; 
while (1){
	//Den do sang 20 giay 
	DEN_DO = 1; 
	DEN_VANG = 0; 
	DEN_XANH = 0; 
	for (i = 20; i >= 0; i--){
	LED_CHUC = Code7Seg[i/10]; 
	LED_DVI = Code7Seg[i%10]; 
	delay(1000);
	}
	// bat den xanh 15 giay 
	DEN_DO = 0; 
	DEN_VANG = 0; 
	DEN_XANH = 1; 
	for (i = 15; i >= 0; i--){
	LED_CHUC = Code7Seg[i/10]; 
	LED_DVI = Code7Seg[i%10]; 
		delay(1000);
	}
	DEN_DO = 0; 
	DEN_VANG = 1; 
	DEN_XANH = 0; 
	for (i = 5; i >= 0; i--){
	LED_CHUC = Code7Seg[i/10]; 
	LED_DVI = Code7Seg[i%10];
		delay(1000);
	}
	}
	}