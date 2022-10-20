/*
 * lights.h
 *
 * Created: 16-Oct-22 9:22:36 PM
 *  Author: ahmed
 */ 

/* These files were added to ease the use of turning on and off lights,
also functions of some timers were used*/


#include "../ECUAL/LED Driver/led.h"
#include "../ECUAL/Button Driver/button.h"
#include "../ECUAL/Timer/timer.h"
#include "../interrupts.h"

int carState; //used to know current traffic light active | RED = 0 YELLOW GREEN = 1

//CAR LIGHTS
void RC_ON();
void RC_OFF();
void YC_ON();
void YC_OFF();
void GC_ON();
void GC_OFF();

//PEDESTRIAN LIGHTS
void RP_ON();
void RP_OFF();
void YP_ON();
void YP_OFF();
void GP_ON();
void GP_OFF();


void TIMER_yellow_car(); //Timer for yellow car lights in normal mode
void TIMER_yellow(); //Timer for yellow car and ped lights in ped mode
void LED_all_off(); //Turns all lights off
void normal(); //normal sequence but not used