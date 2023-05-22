#ifndef _UART_MODE1_H_
#define  _UART_MODE1_H_



void Uart_Init(); // khoi tao UART Mode1 
void Uart_Write(char c); // gui 1 ky tu ra UART
char Uart_Data_Ready(); // kiem tra coi co nhan dc byte du lieu hay chua 
// tra ve 1: da nhan duoc 
// tra ve 0: chua nhan duoc 
void Uart_Write_Text(char *str); // gui 1 chuoi ra UART
// doc byte nhan duoc tu UART
char Uart_Read();
#endif