#include "main.h" 
#include "..\lib\delay.h"
// khai bao ket noi voi LCD 

sbit LCD_RS = P2^0; 
sbit LCD_EN = P2^1; 
#define LCD_DATA P3

void LCD_Cmd( unsigned char cmd)
{
	LCD_RS = 0; 
	LCD_DATA = cmd; 
	LCD_EN = 1; 
	LCD_EN = 0; 
//	delay(2); 
	if (cmd <= 0x02){
	delay(2);
}
else {
delay(1); 
}
}
void Lcd_Chr_Cp(char c) // current position
{
LCD_RS = 1; 
	LCD_DATA = c; 
	LCD_EN = 1; 
	LCD_EN = 0; 
	delay(1);
}
void Lcd_Chr(unsigned char row, unsigned char col, char c){
	unsigned char cmd; 
	
	cmd = (row == 1? 0x80: 0xC0 )+ col - 1; 
	LCD_Cmd(cmd); 
	Lcd_Chr_Cp(c); 
	
// Di chuyen con tro den vi tri can thiet 
	
	
}

void Lcd_Out_Cp(char *str){
unsigned char i = 0; 
while (str[i]!=0){
Lcd_Chr_Cp(str[i]);
i++;
}
}
void Lcd_Out(unsigned char row, unsigned char col, char* str){
unsigned char cmd; 
	cmd = (row == 1? 0x80: 0xC0 )+ col - 1; 
	LCD_Cmd(cmd); 
	Lcd_Out_Cp(str); 
	
	
}
void Lcd_Init(){
LCD_Cmd(0x30);
	delay(5);
	LCD_Cmd(0x30);
	delay(1);
	LCD_Cmd(0x30);
	
	LCD_Cmd(0x38); // so dong hien thi la 2 font 0x8 
	
		LCD_Cmd(0x01); // xoa toan bo noi dung tren LCD
		LCD_Cmd(0x0C); // bat hien thi va tat con tro
}
void main() {

	Lcd_Init();
	//LCD_Cmd(0x01); // xoa toan bo noi dung tren LCD
	//LCD_Cmd(0x0C); // bat hien thi va tat con tro
	//Lcd_Chr_Cp('A'); // hien thi ky tu a
	
	//Lcd_Out_Cp("Hello World");
	//LCD_Cmd(0xC0); // di chuyen con tro ve dong 2
	//Lcd_Out_Cp("This is line 2");
	
	//LCD_Cmd(0x84); // di chuyen con tro den dong 1, cot 5
	//Lcd_Chr_Cp('A'); // Xuat ky tu A 
	
	
	Lcd_Out(1,1,"Toi yeu nuoc viet nam");
	delay(30);
	LCD_Cmd(0x1C); // dich tat ca sang phai 
	LCD_Cmd(0x02); // lenh return home 
	
	
while (1){

	}
	}