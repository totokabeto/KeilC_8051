
#include "main.h" 
#include "..\lib\delay.h" 
void main() {
unsigned char i;
while (1){
		P2 = 0x00; 
	
	for (i = 0 ; i < 8 ; i++){
	delay(300); 
	P2 = P2 << 1; 
	P2 = P2 | 1; 
	}
	delay(300); 
	P2 = 0x00; 
	for (i = 0; i < 8; i++){
delay(300);
		P2 = P2 >> 1;  // 0000 0000
		P2 = P2 |0x80; // 1000 0000 
		}
		delay(300); 
}
	}