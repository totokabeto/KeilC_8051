#include "main.h" 
#include "..\\lib\delay.h"
// khai bao ket noi 
	unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
	sbit LE1 = P2^0; 
	sbit LE2 = P2^1; 
void main() {
	unsigned char i;
LE1 = 0; 
LE2 = 0; 	
while (1){

	for (i = 0; i < 100; i++){
P0 = Code7Seg[i/10]; 
		LE1 = 1; 
		LE1 = 0; 
P0 = Code7Seg[i%10]; 
		LE2 = 1; 
		LE2 = 0; 
		delay(500);
}
	
	}
	}