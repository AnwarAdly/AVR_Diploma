/*
 * GPIO.c
 *
 * Created: 2/17/2020 2:49:25 PM
 *  Author: toshiba
 */ 

#include "GPIO.h"

void vGPIO_Init_OP_Port(PortName_t PortName , uint8_t Data){
	switch(PortName){
		case P_A : DDRA=0xFF; PORTA=Data; break;
		case P_B : DDRB=0xFF; PORTB=Data; break;
		case P_C : DDRC=0xFF; PORTC=Data; break;
		case P_D : DDRD=0xFF; PORTD=Data; break;
		default  : break;
	}
}
void vGPIO_Init_IP_Port(PortName_t PortName ,Pull_Status_t PullStatus){
	switch(PullStatus){
		case DeActivated : switch (PortName){
			case P_A : DDRA=0x00; PORTA=0x00; break;
			case P_B : DDRB=0x00; PORTB=0x00; break; 
			case P_C : DDRC=0x00; PORTC=0x00; break; 
			case P_D : DDRD=0x00; PORTD=0x00; break; 
			default  : break;
		} break;
		case Activated : switch (PortName){
			case P_A : DDRA=0x00; PORTA=0xFF; break;
			case P_B : DDRB=0x00; PORTB=0xFF; break;
			case P_C : DDRC=0x00; PORTC=0xFF; break;
			case P_D : DDRD=0x00; PORTD=0xFF; break;
			default  : break;
		} break;
	}
}
void vGPIO_Write_Port(PortName_t PortName ,uint8_t Data){
	switch (PortName){
		case P_A : PORTA=Data; break;
		case P_B : PORTB=Data; break;
		case P_C : PORTC=Data; break;
		case P_D : PORTD=Data; break;
		default  : break;
	}
}
uint8_t u8GPIO_Read_Port(PortName_t PortName ){
	uint8_t x;
	switch (PortName){
		case P_A : x=PINA; break;
		case P_B : x=PINB; break;
		case P_C : x=PINC; break;
		case P_D : x=PIND; break;
		default  : break;
	}
	return x;
}
void vGPIO_Toggle_Port(PortName_t PortName){
	switch (PortName){
		case P_A : PORTA^=PORTA; break;
		case P_B : PORTB^=PORTB; break;
		case P_C : PORTC^=PORTC; break;
		case P_D : PORTD^=PORTD; break;
		default  : break;
	}
}


void vGPIO_Init_OP_Pin(PortName_t PortName , PinNumber_t PinNumber , uint8_t Data){
	switch (Data){
		case OFF : switch (PortName){
			case P_A : DDRA|=PinNumber; PORTA&=~PinNumber; break;
			case P_B : DDRB|=PinNumber; PORTB&=~PinNumber; break;
			case P_C : DDRC|=PinNumber; PORTC&=~PinNumber; break;
			case P_D : DDRD|=PinNumber; PORTD&=~PinNumber; break;
			default  : break; 
		}break;
		case ON : switch (PortName){
			case P_A : DDRA|=PinNumber; PORTA|=PinNumber; break;
			case P_B : DDRB|=PinNumber; PORTB|=PinNumber; break;
			case P_C : DDRC|=PinNumber; PORTC|=PinNumber; break;
			case P_D : DDRD|=PinNumber; PORTD|=PinNumber; break;
			default  : break;
		}break;
	}
}
void vGPIO_Init_IP_Pin(PortName_t PortName ,PinNumber_t PinNumber ,Pull_Status_t PullStatus){
	switch (PullStatus){
		case DeActivated : switch (PortName){
			case P_A : DDRA&=~PinNumber; PORTA&=~PinNumber; break;
			case P_B : DDRB&=~PinNumber; PORTB&=~PinNumber; break;
			case P_C : DDRC&=~PinNumber; PORTC&=~PinNumber; break;
			case P_D : DDRD&=~PinNumber; PORTD&=~PinNumber; break;
			default  : break;
		}break;
		case Activated : switch (PortName){
			case P_A : DDRA&=~PinNumber; PORTA|=PinNumber; break;
			case P_B : DDRB&=~PinNumber; PORTB|=PinNumber; break;
			case P_C : DDRC&=~PinNumber; PORTC|=PinNumber; break;
			case P_D : DDRD&=~PinNumber; PORTD|=PinNumber; break;
			default  : break;
		}break;
	}
}
void vGPIO_Write_Pin(PortName_t PortName ,PinNumber_t PinNumber ,uint8_t Data){
	switch (Data){
		case OFF : switch (PortName){
			case P_A : PORTA&=~PinNumber; break;
			case P_B : PORTB&=~PinNumber; break;
			case P_C : PORTC&=~PinNumber; break;
			case P_D : PORTD&=~PinNumber; break;
			default  : break;
		}break;
		case ON : switch (PortName){
			case P_A : PORTA|=PinNumber; break;
			case P_B : PORTB|=PinNumber; break;
			case P_C : PORTC|=PinNumber; break;
			case P_D : PORTD|=PinNumber; break;
			default  : break;
		}break;
	}
}
uint8_t u8GPIO_Read_Pin(PortName_t PortName ,PinNumber_t PinNumber ){
	uint8_t x;
	switch (PortName){
		case P_A : x=PINA&PinNumber; break;
		case P_B : x=PINB&PinNumber; break;
		case P_C : x=PINC&PinNumber; break;
		case P_D : x=PIND&PinNumber; break;
		default  : break;
	}
	return x;
}
void vGPIO_Toggle_Pin(PortName_t PortName ,PinNumber_t PinNumber ){
	switch (PortName){
		case P_A : PORTA^=PinNumber; break;
		case P_B : PORTB^=PinNumber; break;
		case P_C : PORTC^=PinNumber; break;
		case P_D : PORTD^=PinNumber; break;
		default  : break;
	}
}