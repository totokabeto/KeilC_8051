#include "main.h" 
#include "..\lib\delay.h"
#include "..\lib\Uart_Mode1.h"

void main() {
char i; 
Uart_Init(); 
while (1){
	Uart_Write_Text("nhap vao ky ty in thuong");
	while (Uart_Date_Ready() == 0); 
	i = Uart_Read(); 
	i = i - 32; // doi sang in hoa 
	Uart_Write_Text("->"); 
	Uart_Write(i); 
	Uart_Write_Text("\r\n"); 
	}
	}