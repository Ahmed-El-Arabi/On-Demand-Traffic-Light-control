/*
 * app.c
 *
 * Created: 11-Oct-22 2:21:58 AM
 *  Author: ahmed
 */ 

#include "app.h"
#include "../Lights/lights.h"

int carMode = 1; //Normal mode flag = 1 Pedestrian = 0


//Function that is called between every light transition in the main loop to check if the ISR was called or not
int check(){ 
	if(carMode == 0){ //if the ISR is called we will execute the code, else return 0
		if(carState == 1){   //if car light is green or yellow
			
			LED_all_off();
			RP_ON();
			TIMER_yellow();
			RP_OFF();
			
			GP_ON();
			RC_ON();
			TIMER_delay();
			
			GP_OFF();
			RC_OFF();
			
			carMode = 1;
			return 1;
		}
		else{ //if car light is red
			LED_all_off();
			
			RC_ON();
			GP_ON();
			TIMER_delay();
			RC_OFF();
			TIMER_yellow();
			GP_OFF();
			RP_ON();
			GC_ON();
			carMode = 1;
			return 1;
		}
	}
	return 0;
}

void APP_init(void){
	
	//Button init
	BUTTON_init(BUTTON_1_PORT,BUTTON_1_PIN);
	
	//LEDS init pedestrian
	LED_init(LED_PORT_PED,LED_G_PED);
	LED_init(LED_PORT_PED,LED_Y_PED);
	LED_init(LED_PORT_PED,LED_R_PED);
	
	//LEDS init car
	LED_init(LED_PORT_CAR,LED_G_CAR);
	LED_init(LED_PORT_CAR,LED_Y_CAR);
	LED_init(LED_PORT_CAR,LED_R_CAR);	
	
	
	//Timer init
	TIMER_init();
	
	//Interrupts init
	sei(); //enable global interrupt
	RISING_EDGE_SETUP();
	SETUP_INT0();
	
	
}


void APP_start(void){
	while(1){ 
		LED_all_off();
		
		GC_ON();		
		if(check() == 1){
			continue;
		}
		
		TIMER_delay();
		if(check() == 1){
			continue;
		}
		GC_OFF();
		if(check() == 1){
			continue;
		}
		TIMER_yellow_car();
		if(check() == 1){
			continue;
		}
		
		RC_ON();
		if(check() == 1){
			continue;
		}
		TIMER_delay();
		if(check() == 1){
			continue;
		}
		RC_OFF();
		if(check() == 1){
			continue;
		}

		TIMER_yellow_car();

}
}


//Interrupt Service Routine that changes carMode to 0, which executes check(); function
ISR(EXT_INT_0){
	carMode = 0;
}






