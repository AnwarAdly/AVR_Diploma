/*
 * Keypad.h
 *
 * Created: 2/17/2020 8:17:12 PM
 *  Author: toshiba
 */ 

#include "GPIO.h"
#include "Keypad_Config.h"
#include "Micro_Config.h"
#include "Std_Types.h"

#ifndef KEYPAD_H_
#define KEYPAD_H_


#define NOT_VALID_VALUE 0xFF
#define SET             1
#define RESET           0
#define INPUT_IS_STILL_VALID	    ((LINE0_DATAIN&(1U<<LINE0))\
										&&(LINE1_DATAIN&(1U<<LINE1))\
										&&(LINE2_DATAIN&(1U<<LINE2))\
										&&(LINE3_DATAIN&(1U<<LINE3)))



void vKeypad_Init (void);
unsigned char ucKeypad_Scan (void);


#endif /* KEYPAD_H_ */