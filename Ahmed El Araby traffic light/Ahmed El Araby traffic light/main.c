/*
 * Ahmed El Araby traffic light.c
 *
 * Created: 11-Oct-22 2:14:14 AM
 * Author : ahmed
 */ 

#include <avr/io.h>
#include "ECUAL/LED Driver/led.h"

#define F_CPU 1000000UL

//test modules
/*int main(void)
{
	//DIO_init(PORT_A,4,OUT);
	//LED_init(LED_PORT_PED,LED_Y_PED);
	LED_init(LED_PORT_CAR,LED_R_CAR);
	TCCR0 = 0x00; //Normal mode
	//set timer initial value 
	TCNT0 = 0x00;
	//TIMER_init();
	
	
	while (1)
	{
		int overflowCounter;
		//DIO_toggle(PORT_A,4);
		//LED_on(LED_PORT_PED,LED_Y_PED);
		LED_toggle(LED_PORT_CAR,LED_R_CAR);
		//delay 512ms
		//Timer Start -> set prescalar in clocksource
		TCCR0 |= (1<<0); //no prescalar
		//STOP AFTER ONE OVERFLOW -> 256 microsecond 
		//wait until overflow
		while(overflowCounter < overflows){
			while((TIFR & (1<<0)) == 0 );
			//clear bit
			TIFR |= (1<<0);
			//Timer Stop
			overflowCounter++;
		}	
		overflowCounter = 0; 
		
		TCCR0 = 0x00;	
	}
}
*/



int main(void)
{
    APP_init();
    while (1) 
    {
		APP_start();
    }
}

