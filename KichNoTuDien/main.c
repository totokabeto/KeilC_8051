#include "main.h" 
#include "..\lib\delay.h"
// ket noi phan cung 
sbit BTN = P1^0; 
sbit RL = P2^0; 
unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
#define LED P0
void main() {
	signed char i; 
while (1){
	LED = Code7Seg[9]; 
if (BTN == 0){
for (i = 9; i >= 0; i--){
		LED = Code7Seg[i]; 
		delay(1000);
}
		RL = 0; 
for (i = 0; i < 10; i++){
	LED = Code7Seg[i]; 
		delay(1000);
}
RL = 1; 
}
	}
	}