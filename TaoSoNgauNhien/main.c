#include "main.h" 
#include "../lib/delay.h"
unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
sbit BTN = P1^0; 
#define LED_PORT P2 
void main() {
unsigned char dem = 0; 
while (1){
	while (BTN == 0){
dem++;}
	LED_PORT= Code7Seg[dem%9 +1]; // tao so ngau nhien tu 1 -> 9 
}
	}