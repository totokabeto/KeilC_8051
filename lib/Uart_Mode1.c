#include "main.h" 
#include "..\lib\Uart_Mode1.h"

void Uart_Init(){
	//Khoi tao UART o mode 1, 9600 baud 
	SM0 = 0; SM1 = 1; // Chon UART Mode 1 
	TMOD &= 0x0F; // 0010 xxxx - Timer1 hoat dong o che do 8bit tu dong nap lai 
	TMOD |= 0x20; 
	TH1 = 0xFD; 
	TR1 = 1; // Timer1 bat dau chay 
	TI = 1; // san sang gui du lieu 
	REN = 1; //Cho phep nhan du lieu
}

void Uart_Write(char c){
while (TI == 0);
TI = 0;
SBUF = 0; 

}

char Uart_Data_Ready(){
return RI; 
}

char Uart_Read(){
RI = 0; 
return SBUF; 

}
void Uart_Write_Text(char *str){
unsigned char i = 0; 
	while(str[i] != 0){
	Uart_Write(str[i]);
		i++;
}

}