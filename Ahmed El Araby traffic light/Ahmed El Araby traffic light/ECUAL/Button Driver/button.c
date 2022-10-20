/*
 * button.c
 *
 * Created: 11-Oct-22 2:17:05 AM
 *  Author: ahmed
 */ 

#include "button.h"

//initialize
void BUTTON_init(uint8_t buttonPort, uint8_t buttonPin){
	DIO_init(buttonPort,buttonPin,IN);
	}


//read
void BUTTON_read(uint8_t buttonPort, uint8_t buttonPin, uint8_t *value){
		DIO_read(buttonPort,buttonPin,value);
}