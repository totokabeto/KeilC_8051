#include "main.h" 
#include "..\lib\delay.h" 
sbit BTN = P1^0;
sbit LED = P2^0; 
void main() {
	LED = 0; 
while (1){
	/*if(ON_BTN == 0){
		LED = 1; 
}
if (OFF_BTN == 0){
	LED = 0;
	}*/ 
	if (BTN == 0){
		delay(20); 
		if (BTN == 0){
LED = !LED; 
		while (BTN == 0);} 
}
	}
}