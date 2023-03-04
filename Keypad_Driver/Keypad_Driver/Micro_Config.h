/*
 * Micro_Config.h
 *
 * Created: 3/28/2020 4:45:11 PM
 *  Author: toshiba
 */ 


#ifndef MICRO_CONFIG_H_
#define MICRO_CONFIG_H_

#ifndef F_CPU
#define F_CPU 8000000UL //8MHz Clock frequency
#endif

#include <avr/io.h>
#include <avr/interrupt.h> // Must be included First
#include <util/delay.h>



#endif /* MICRO_CONFIG_H_ */