/*
 * dio.h
 *
 * Created: 11-Oct-22 2:19:01 AM
 *  Author: ahmed
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "../../registers.h"

#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

//Direction defines
#define IN 0
#define OUT 1

//Values defines
#define HIGH 0
#define LOW 1


void DIO_init(uint8_t portNumber, uint8_t pinNumber, uint8_t direction);// Initialize dio direction
void DIO_write(uint8_t portNumber, uint8_t pinNumber, uint8_t value); //write data to dio
void DIO_toggle(uint8_t portNumber, uint8_t pinNumber); //toggle dio
void DIO_read(uint8_t portNumber, uint8_t pinNumber, uint8_t* value); //read dio



#endif /* DIO_H_ */