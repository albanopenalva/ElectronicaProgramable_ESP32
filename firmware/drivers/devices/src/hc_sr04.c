/** \brief Bare Metal driver for hc_sr04 for the EDU-CIAA board.
 **
 **/

/*==================[inclusions]=============================================*/
#include "hc_sr04.h"
#include "delay_mcu.h"
/*==================[macros and definitions]=================================*/

/*==================[internal data declaration]==============================*/
static gpio_t echo_st, trigger_st; /**<  Stores the pin inicilization*/
/*==================[internal functions declaration]=========================*/

/*==================[internal data definition]===============================*/

/*==================[external data definition]===============================*/

/*==================[internal functions definition]==========================*/

/*==================[external functions definition]==========================*/

bool HcSr04Init(gpio_t echo, gpio_t trigger){
	echo_st = echo;
	trigger_st = trigger;

	/** Configuration of the GPIO pins*/
	GPIOInit(echo, GPIO_INPUT);
	GPIOInit(trigger, GPIO_OUTPUT);

	return true;
}

uint16_t HcSr04ReadDistanceInCentimeters(void){
	uint16_t distance = 0;
	GPIOOn(trigger_st);
	DelayUs(10);
	GPIOOff(trigger_st);
	while(!GPIORead(echo_st));
	do{
		DelayUs(1);
		distance++;
		if(distance > 23200)
			return 400;
	}
	while(GPIORead(echo_st));
	return (distance/32);
}

uint16_t HcSr04ReadDistanceInInches(void){
	uint16_t distance = 0;
	GPIOOn(trigger_st);
	DelayUs(10);
	GPIOOff(trigger_st);
	while(!GPIORead(echo_st));
	do{
		DelayUs(1);
		distance++;
		if(distance > 23200)
			return 157;
	}
	while(GPIORead(echo_st));
	return (distance/148);
}

bool HcSr04Deinit(void){
	GPIODeinit();
	return true;
}

/*==================[end of file]============================================*/
