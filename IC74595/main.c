#include "main.h" 
#include "..\lib\delay.h"
#include "..\lib\IE74595.h"

void main() {
	unsigned char b, i; 
	unsigned char buffer[2];
while (1){
	for(i =0; i < 2;i++){

buffer[i] = 0; 
}
IE74595_Out(buffer,2); 
delay(500);
for(i =0; i < 2;i++){

buffer[i] = 1; 
}
IE74595_Out(buffer,2); 
delay(500);
	
	b = 0; 
	IE74595_Out_Byte(b);
	delay(300);
	//IE74595_Out_Byte(b);
	//delay(500);
	//b = ~b; 
	for (i = 0; i < 8; i++){
	b = (b << 1)|0x01; 
		IE74595_Out_Byte(b);
		delay(500);
}
	}
	}