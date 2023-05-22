#include "main.h" 
#include "..\lib\delay.h"

sbit BTN = P1^0; 
sbit RELAY = P2^0; 
void main() {
	
	RELAY = 1; //tat den 
while (1){
	if (BTN == 0){
delay(20); 
		if (BTN == 0){
		RELAY = !RELAY; 
			while (BTN ==0);
}
}
	}
	}