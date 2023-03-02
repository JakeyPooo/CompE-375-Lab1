/*
Author: Jacob Anderson
RedID: 827419418
Date: January 31, 2023
Assignment: Lab 1
Description: Output name and RedID in Morse code to an on-board LED.
*/

#define F_CPU 16000000UL  // 16MHz clock from the debug processor
#include <avr/io.h>
#include <util/delay.h>

void dot(){
	PORTB |= (1<<PORTB5); //Set port bit B5 to 1 to turn on the LED
	_delay_ms(200);  //delay 200ms
	PORTB &= ~(1<<PORTB5); //Clear port bit B5 to 0 to turn off the LED
	_delay_ms(200);  //delay 200ms
}

void dash(){
	PORTB |= (1<<PORTB5); //Set port bit B5 to 1 to turn on the LED
	_delay_ms(600);  //delay 600ms
	PORTB &= ~(1<<PORTB5); //Clear port bit B5 to 0 to turn off the LED
	_delay_ms(200);  //delay 200ms
}

void spaceL(){
	_delay_ms(400);  //delay 400ms
}

void spaceW(){
	_delay_ms(800);  //delay 800ms
}

int main(){
	DDRB |= (1<<DDB5);  //0x20 (hex) // Set port bit B5 in data direction register to 1: an OUTput
	while(1){
		char s[] = "Jacob Anderson 827419418";
		for(int i = 0; i < sizeof(s); i++)
		{
			if(s[i] == 'A' || s[i] == 'a'){
				dot(); dash(); spaceL();
			}
			if(s[i] == 'B' || s[i] == 'b'){
				dash(); dot(); dot(); dot(); spaceL();
			}
			if(s[i] == 'C' || s[i] == 'c'){
				dash(); dot(); dash(); dot(); spaceL();
			}
			if(s[i] == 'D' || s[i] == 'd'){
				dash(); dot(); dot(); spaceL();
			}
			if(s[i] == 'E' || s[i] == 'e'){
				dot(); spaceL();
			}
			if(s[i] == 'F' || s[i] == 'f'){
				dot(); dot(); dash(); dot(); spaceL();
			}
			if(s[i] == 'G' || s[i] == 'g'){
				dash(); dash(); dot(); spaceL();
			}
			if(s[i] == 'H' || s[i] == 'h'){
				dot(); dot(); dot(); dot(); spaceL();
			}
			if(s[i] == 'I' || s[i] == 'i'){
				dot(); dot(); spaceL();
			}
			if(s[i] == 'J' || s[i] == 'j'){
				dot(); dash(); dash(); dash(); spaceL();
			}
			if(s[i] == 'K' || s[i] == 'k'){
				dash(); dot(); dash(); spaceL();
			}
			if(s[i] == 'L' || s[i] == 'l'){
				dot(); dash(); dot(); dot(); spaceL();
			}
			if(s[i] == 'M' || s[i] == 'm'){
				dash(); dash(); spaceL();
			}
			if(s[i] == 'N' || s[i] == 'n'){
				dash(); dot(); spaceL();
			}
			if(s[i] == 'O' || s[i] == 'o'){
				dash(); dash(); dash(); spaceL();
			}
			if(s[i] == 'P' || s[i] == 'p'){
				dot(); dash(); dash(); dot(); spaceL();
			}
			if(s[i] == 'Q' || s[i] == 'q'){
				dash(); dash(); dot(); dash(); spaceL();
			}
			if(s[i] == 'R' || s[i] == 'r'){
				dot(); dash(); dot(); spaceL();
			}
			if(s[i] == 'S' || s[i] == 's'){
				dot(); dot(); dot(); spaceL();
			}
			if(s[i] == 'T' || s[i] == 't'){
				dash(); spaceL();
			}
			if(s[i] == 'U' || s[i] == 'u'){
				dot(); dot(); dash(); spaceL();
			}
			if(s[i] == 'V' || s[i] == 'v'){
				dot(); dot(); dot(); dash(); spaceL();
			}
			if(s[i] == 'W' || s[i] == 'w'){
				dot(); dash(); dash(); spaceL();
			}
			if(s[i] == 'X' || s[i] == 'x'){
				dash(); dot(); dot(); dash(); spaceL();
			}
			if(s[i] == 'Y' || s[i] == 'y'){
				dash(); dot(); dash(); dash(); spaceL();
			}
			if(s[i] == 'Z' || s[i] == 'z'){
				dash(); dash(); dot(); dot(); spaceL();
			}
			if(s[i] == '1'){
				dot(); dash(); dash(); dash(); dash(); spaceL();
			}
			if(s[i] == '2'){
				dot(); dot(); dash(); dash(); dash(); spaceL();
			}
			if(s[i] == '3'){
				dot(); dot(); dot(); dash(); dash(); spaceL();
			}
			if(s[i] == '4'){
				dot(); dot(); dot(); dot(); dash(); spaceL();
			}
			if(s[i] == '5'){
				dot(); dot(); dot(); dot(); dot(); spaceL();
			}
			if(s[i] == '6'){
				dash(); dot(); dot(); dot(); dot(); spaceL();
			}
			if(s[i] == '7'){
				dash(); dash(); dot(); dot(); dot(); spaceL();
			}
			if(s[i] == '8'){
				dash(); dash(); dash(); dot(); dot(); spaceL();
			}
			if(s[i] == '9'){
				dash(); dash(); dash(); dash(); dot(); spaceL();
			}
			if(s[i] == '0'){
				dash(); dash(); dash(); dash(); dash(); spaceL();
			}
			if(s[i] == ' '){
				spaceW();
			}
		}
	}	
}