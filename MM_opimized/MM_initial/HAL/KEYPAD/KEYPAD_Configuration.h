/*
 * KEYPAD_Configuration.h
 *
 * Created: 3/5/2024 12:12:05 AM
 *  Author: oraga
 */ 


#ifndef KEYPAD_CONFIGURATION_H_
#define KEYPAD_CONFIGURATION_H_

#include "PERIPHERAL_LIBRARY.h"

#define KEYPAD_PORT     DIO_PORTC

#define KEYPAD_PIN_INP0 DIO_PIN4
#define KEYPAD_PIN_INP1 DIO_PIN5
#define KEYPAD_PIN_INP2 DIO_PIN6
#define KEYPAD_PIN_INP3 DIO_PIN7

#define KEYPAD_PIN_OUT0 DIO_PIN0
#define KEYPAD_PIN_OUT1 DIO_PIN1
#define KEYPAD_PIN_OUT2 DIO_PIN2
#define KEYPAD_PIN_OUT3 DIO_PIN3

#define KEYPAD_INPUT  DIO_INPUT
#define KEYPAD_OUTPUT DIO_OUTPUT

#define KEYPAD_LOW    DIO_LOW
#define KEYPAD_HIGH   DIO_HIGH


#define KEYPAD_PRESSED 0

#define KEYPAD_START_COL 0
#define KEYPAD_END_COL 3

#define KEYPAD_START_ROW 4
#define KEYPAD_END_ROW 7



#endif /* KEYPAD_CONFIGURATION_H_ */