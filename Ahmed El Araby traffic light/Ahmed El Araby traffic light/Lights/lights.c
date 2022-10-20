/*
 * lights.c
 *
 * Created: 16-Oct-22 9:22:18 PM
 *  Author: ahmed
 */ 

#include "lights.h"

void LED_all_off(){
	LED_off(LED_PORT_PED,LED_G_PED);
	LED_off(LED_PORT_CAR,LED_G_CAR);
	LED_off(LED_PORT_PED,LED_Y_PED);
	LED_off(LED_PORT_CAR,LED_Y_CAR);
	LED_off(LED_PORT_PED,LED_R_PED);
	LED_off(LED_PORT_CAR,LED_R_CAR);
}

void TIMER_yellow_car(){
	TIMER_blink_car();
	YC_OFF();
}


void TIMER_yellow(){
	TIMER_blink();
	YP_OFF();
	YC_OFF();
}

void TOGGLE_yellow(){
	LED_toggle(LED_PORT_CAR,LED_Y_CAR);
	LED_toggle(LED_PORT_PED,LED_Y_PED);
}


void RC_OFF(){
	carState = 1;
	LED_off(LED_PORT_CAR,LED_R_CAR); //RED car
}

void RC_ON(){
	carState = 0;
	LED_on(LED_PORT_CAR,LED_R_CAR); //RED car
}

void YC_OFF(){
	carState = 1;
	LED_off(LED_PORT_CAR,LED_Y_CAR); //RED car
}

void YC_ON(){
	carState = 1;
	LED_on(LED_PORT_CAR,LED_Y_CAR); //RED car
}

void GC_OFF(){
	carState = 1;
	LED_off(LED_PORT_CAR,LED_G_CAR); //RED car
}

void GC_ON(){
	carState = 1;
	LED_on(LED_PORT_CAR,LED_G_CAR); //RED car
}

void RP_ON(){
		LED_on(LED_PORT_PED,LED_R_PED); //RED car
}

void RP_OFF(){
	LED_off(LED_PORT_PED,LED_R_PED); //RED car
}

void GP_ON(){
	LED_on(LED_PORT_PED,LED_G_PED); //RED car
}

void GP_OFF(){
	LED_off(LED_PORT_PED,LED_G_PED); //RED car
}

void YP_ON(){
	LED_on(LED_PORT_PED,LED_Y_PED); //RED car
}

void YP_OFF(){
	LED_off(LED_PORT_PED,LED_Y_PED); //RED car
}