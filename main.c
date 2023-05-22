#include <REGX52.H>
//sbit LED_PIN = P0^0; // Dat ten cho chan P0^0 la LED_PIN

void Delay_ms(unsigned int t){
unsigned int x,y; 
for (x = 0; x < t; x++){
	for (y =0; y < 123; y++);} //delsy 1ms 
}
void main(){
	unsigned char i; 
	while (1){
		for ( i = 0; i < 5; i++){
			 P0 = 0x00; 
	Delay_ms(500);
		P0 = 0xFF; 
		Delay_ms(500);
		}
		for ( i =0; i < 5; i++){
 P0 = 0x0F; 
	Delay_ms(500);
		P0 = 0xF0; 
		Delay_ms(500);
		}
		for (i = 0 ; i < 5; i++){
			 P0 = 0x055; 
	Delay_ms(500);
		P0 = 0xAA; 
		Delay_ms(500);
}
		
	}
}
