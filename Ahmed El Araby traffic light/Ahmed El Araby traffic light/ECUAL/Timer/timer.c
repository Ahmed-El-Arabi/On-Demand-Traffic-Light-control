/*
 * timer.c
 *
 * Created: 11-Oct-22 2:19:54 AM
 *  Author: ahmed
 */ 


#include "timer.h"
#include "../Button Driver/button.h"
#include "../../Lights/lights.h"

//Timer set initial value
void TIMER_init(){
	TCCR0 = 0x00;
	TCNT0 = 0x00;
	
}


//timer delay for 5 seconds
void TIMER_delay(){ 
	TCCR0 |= (1<<0); //no prescalar (1)
	//Ttick = 1 microsecond
	//Tmax = 256 microseconds
	//Number of overflows to reach 5 seconds = 5/256x10^-6 = 19531.25 rounded up = 19532
	//wait until overflow
	overflowCounter = 0;
	
	/*the and condition breaks the timer if the button is pressed, thus you 
	 don't have to wait for the delay to finish so that the ISR is executed */
	while(overflowCounter < overflows && ((BUTTON_1_PIN) == 0) ){   
		while((TIFR & (1<<0)) == 0 ); 
		//clear bit
		TIFR |= (1<<0);
		//Timer Stop
		overflowCounter++;
	}
	overflowCounter = 0;
			
	TCCR0 = 0x00;
}

//Timer for blinking yellow leds
void TIMER_blink_car(){
	TCCR0 |= (1<<0); //no prescalar (1)
	while(overflowCounter < overflows  && ((BUTTON_1_PIN) == 0) ){ 
		while((TIFR & (1<<0)) == 0 );
		
		TIFR |= (1<<0);
		overflowCounter++;
		
		//The yellow light blinks time in 5 seconds so the remainder of the overflow counter/5 is a condition to toggle the led
		if(overflowCounter % 1953 == 0){
				LED_toggle(LED_PORT_CAR,LED_Y_CAR);
		}
	}
	overflowCounter = 0;		
	TCCR0 = 0x00;
}


//same as the function above but blinks both ped and car lights
void TIMER_blink(){
	TCCR0 |= (1<<0); //no prescalar (1)
	while(overflowCounter < overflows){ //&& ((BUTTON_1_PIN) == 0)
		while((TIFR & (1<<0)) == 0 );
		//clear bit
		TIFR |= (1<<0);
		//Timer Stop
		overflowCounter++;
		
		if(overflowCounter % 1953 == 0){
			TOGGLE_yellow();
		}
	}
	overflowCounter = 0;		
	TCCR0 = 0x00;
}
	

	
