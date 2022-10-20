/*
 * button.h
 *
 * Created: 11-Oct-22 2:17:15 AM
 *  Author: ahmed
 */ 

#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO Driver/dio.h"

#define BUTTON_1_PORT PORT_D 
#define BUTTON_1_PIN PIND&0b00000100


//BUTTON STATE MACROS
#define LOW		0
#define HIGH	1

//initialize
void BUTTON_init(uint8_t buttonPort, uint8_t buttonPin);


//read
void BUTTON_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t *value);




#endif /* BUTTON_H_ */