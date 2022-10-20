
/*
 * app.h
 *
 * Created: 11-Oct-22 2:22:06 AM
 *  Author: ahmed
 */ 

#ifndef APPLICATION_H_
#define APPLICATION_H_


#include <setjmp.h>
#include "../ECUAL/LED Driver/led.h"
#include "../ECUAL/Button Driver/button.h"
#include "../ECUAL/Timer/timer.h"
#include "../interrupts.h"

int check(); //function that checks if the interrupt is called or not, if yes then it will execute the ped lights depending in the carState
void APP_init(void); //initializes all lights, timers, and interrupt registers needed
void APP_start(void); ////main loop









#endif /* APPLICATION_H_ */