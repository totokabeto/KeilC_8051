#include "main.h" 
#include <stdio.h>
#include "..\lib\delay.h"
#include "..\lib\UartMode1.h"
void main() {
	char c; 
	// khoi tao Uart , 1 bit start, 8 bit du lieu , 1 bit stop
	Uart_Init();
	putchar ('A'); // tuong duong Uart_Write 
	printf("Hello, world"); 
	
	
while (1){
	Uart_Write_Text("Nhap vao 1 ky tu : "); 
	c = _getkey(); 
	putchar(c-32); // doi sang ky tu in Hoa 
	putchar('\r');
	putchar('\n');
	}
	}