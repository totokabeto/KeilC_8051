#include "main.h" 
#include "..\UartMode1.h"
void main() {
	
	P1_0 = 0; 
	Uart_Init();
while (1){
	
	if (Uart_Data_Ready()){
		if (Uart_Read() == 0x01){
	P1_0 = 1; // bat LED
	}
	else {
	P1_0 = 0; 
	}
	}
	}
	}