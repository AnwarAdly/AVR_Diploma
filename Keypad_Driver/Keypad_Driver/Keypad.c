/*
 * Keypad.c
 *
 * Created: 2/17/2020 8:16:43 PM
 *  Author: toshiba
 */ 

#include "Keypad.h"

static const unsigned char g_Keypad_Mapping[4][4] = {{'1','2','3','A'},
													 {'4','5','6','B'},
													 {'7','8','9','C'},
													 {'#','0','*','D'}};


void vKeypad_Init (void){
	vGPIO_Init_OP_Pin(P_A,ROW0,SET);
	vGPIO_Init_OP_Pin(P_A,ROW1,SET);
	vGPIO_Init_OP_Pin(P_A,ROW2,SET);
	vGPIO_Init_OP_Pin(P_A,ROW3,SET);
	vGPIO_Init_IP_Pin(P_A,LINE0,SET);
	vGPIO_Init_IP_Pin(P_A,LINE1,SET);
	vGPIO_Init_IP_Pin(P_A,LINE2,SET);
	vGPIO_Init_IP_Pin(P_A,LINE3,SET);
}

unsigned char ucKeypad_Scan (void){
	uint8_t Row=0; //index row
	uint8_t	line = NOT_VALID_VALUE; // index col.
	unsigned char result = NOT_VALID_VALUE; //loop on rows
	for(Row=0;Row<4;Row++){
		ROW0_DATAOUT |=(SET<<ROW0);
		ROW1_DATAOUT |=(SET<<ROW1);
		ROW2_DATAOUT |=(SET<<ROW2);
		ROW3_DATAOUT |=(SET<<ROW3);
		switch (Row){
			case 0:ROW0_DATAOUT &=~(SET<<ROW0);break;
			case 1:ROW1_DATAOUT &=~(SET<<ROW1);break;
			case 2:ROW2_DATAOUT &=~(SET<<ROW2);break;
			case 3:ROW3_DATAOUT &=~(SET<<ROW3);break;
			default:break;
		}
		if ((LINE0_DATAIN&(1U<<LINE0)) == RESET)		{line = 0;}
		else if ((LINE1_DATAIN&(1U<<LINE1)) == RESET)	{line = 1;}
		else if ((LINE2_DATAIN&(1U<<LINE2)) == RESET)	{line = 2;}
		else if ((LINE3_DATAIN&(1U<<LINE3)) == RESET)	{line = 3;}
		else { ; /* MISRA */}	
		if (line!=NOT_VALID_VALUE){
			while (INPUT_IS_STILL_VALID==RESET);
			result = g_Keypad_Mapping[Row][line];
			break; 
		}			
	}
	return result;
}