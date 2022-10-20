/*
 * timer.h
 *
 * Created: 11-Oct-22 2:20:03 AM
 *  Author: ahmed
 */ 

#ifndef TIMER_H_
#define TIMER_H_

#include "../../registers.h"
#define overflows 19532
#define overflows1 9766 //Number of overflows to reach 5 seconds
//#define overflows_blink 000 //Number of overflows for 1 sec
int overflowCounter;

//set timer initial value
void Timer_init();

void TOGGLE_yellow();

void TIMER_delay(); 

void TIMER_blink();



#endif /* TIMER_H_ */
