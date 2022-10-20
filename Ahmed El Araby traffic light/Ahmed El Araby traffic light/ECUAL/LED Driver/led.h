/*
 * led.h
 *
 * Created: 11-Oct-22 2:17:37 AM
 *  Author: ahmed
 */ 

#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO Driver/dio.h"


//PED LIGHTS
#define LED_PORT_PED PORT_A
#define LED_G_PED PIN0
#define LED_Y_PED PIN1
#define LED_R_PED PIN2

//CAR LIGHTS
#define LED_PORT_CAR PORT_B
#define LED_G_CAR PIN0
#define LED_Y_CAR PIN1
#define LED_R_CAR PIN2



void LED_init(uint8_t ledPort, uint8_t ledPin);

void LED_on(uint8_t ledPort, uint8_t ledPin);

void LED_off(uint8_t ledPort, uint8_t ledPin);

void LED_toggle(uint8_t ledPort, uint8_t ledPin);




#endif /* LED_H_ */