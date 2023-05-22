#include <main.h> 
#include <port.h>

void main() {
	LED = 0; 
while(1){
	if (ON_BTN == 0){
LED = 1; 
} else if (OFF_BTN ==0){
LED = 0; 
}
}}