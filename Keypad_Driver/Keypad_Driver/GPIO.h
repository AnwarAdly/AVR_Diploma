/*
 * GPIO.h
 *
 * Created: 2/17/2020 2:48:54 PM
 *  Author: toshiba
 */ 
 
#include "Std_Types.h"

#ifndef GPIO_H_
#define GPIO_H_

#define PIN0 0b00000000
#define PIN1 0b00000001
#define PIN2 0b00000010
#define PIN3 0b00000011
#define PIN4 0b00000100
#define PIN5 0b00000101
#define PIN6 0b00000110
#define PIN7 0b00000111

#define ON  1
#define OFF 0

typedef enum PinNumber_t{
	PIN0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7
	}PinNumber_t;

typedef enum PortName_t{
	P_A,
	P_B,
	P_C,
	P_D
	}PortName_t;
	
typedef enum Pull_Status_t{
	DeActivated,
	Activated
	}Pull_Status_t;	
	
void vGPIO_Init_OP_Port (PortName_t ,uint8 );
void vGPIO_Init_IP_Port (PortName_t ,Pull_Status_t );
void vGPIO_Write_Port (PortName_t , uint8 );
uint8 u8GPIO_Read_Port (PortName_t  );
void vGPIO_Toggle_Port (PortName_t );
void vGPIO_Init_OP_Pin (PortName_t , PinNumber_t , uint8 );
void vGPIO_Init_IP_Pin (PortName_t ,PinNumber_t , Pull_Status_t );
void vGPIO_Write_Pin (PortName_t ,PinNumber_t ,uint8 );
uint8 u8GPIO_Read_Pin (PortName_t ,PinNumber_t );
void vGPIO_Toggle_Pin (PortName_t ,PinNumber_t );
	


#endif /* GPIO_H_ */