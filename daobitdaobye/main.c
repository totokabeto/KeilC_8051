#include <REGX52.H>
void delay_ms(unsigned char t ){
unsigned int x, y; 
for (x = 0; x < t; x++){
	for (y = 0; y < 123 ; y++){
}
}
}
void main() {
int i; 
while(1){
	 P0 = 0x01;
	 for (i = 0 ; i < 8; i++){
	 // 0000 0001
		 
		 delay_ms(500); 
		  P0 <<= 1; 
}
P0 = 0x80; 
for (i = 0; i < 8 ; i++){
delay_ms(500); 
	P0 = P0 >> 1; 
}
}
}
