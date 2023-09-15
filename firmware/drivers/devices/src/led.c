
/*==================[inclusions]=============================================*/
#include "led.h"
#include "gpio_mcu.h"
/*==================[macros and definitions]=================================*/
#define GPIO_LED1 GPIO_21
#define GPIO_LED2 GPIO_22
#define GPIO_LED3 GPIO_23
/*==================[internal data declaration]==============================*/

/*==================[internal functions declaration]=========================*/

/*==================[internal data definition]===============================*/

/*==================[external data definition]===============================*/

/*==================[internal functions definition]==========================*/

/*==================[external functions definition]==========================*/

uint8_t LedsInit(void)
{
	/** Configuration of the GPIO */
	GPIOInit(GPIO_LED1, GPIO_OUTPUT);
	GPIOInit(GPIO_LED2, GPIO_OUTPUT);
	GPIOInit(GPIO_LED3, GPIO_OUTPUT);

	/** Turn off leds*/
	GPIOOff(GPIO_LED1);
	GPIOOff(GPIO_LED2);
	GPIOOff(GPIO_LED3);

	return true;
}

/** \brief Function to turn on a specific led */
uint8_t LedOn(led_t led)
{
	uint8_t result = false;
	switch (led)
	{
	case LED_1:
		GPIOOn(GPIO_LED1);
		result = true;
		break;
	case LED_2:
		GPIOOn(GPIO_LED2);
		result = true;
		break;
	case LED_3:
		GPIOOn(GPIO_LED3);
		result = true;
		break;
	case LED_RGB_R:
		result = true;
		break;
	case LED_RGB_G:
		result = true;
		break;
	case LED_RGB_B:
		result = true;
		break;
	}
	return result;
}

uint8_t LedOff(led_t led)
{
	uint8_t result = false;
	switch (led)
	{
	case LED_1:
		GPIOOff(GPIO_LED1);
		result = true;
		break;
	case LED_2:
		GPIOOff(GPIO_LED2);
		result = true;
		break;
	case LED_3:
		GPIOOff(GPIO_LED3);
		result = true;
		break;
	case LED_RGB_R:
		result = true;
		break;
	case LED_RGB_G:
		result = true;
		break;
	case LED_RGB_B:
		result = true;
		break;
	}
	return result;
}

uint8_t LedToggle(led_t led)
{
	uint8_t result = false;

	switch (led)
	{
	case LED_1:
		GPIOToggle(GPIO_LED1);
		result = true;
		break;
	case LED_2:
		GPIOToggle(GPIO_LED2);
		result = true;
		break;
	case LED_3:
		GPIOToggle(GPIO_LED3);
		result = true;
		break;
	case LED_RGB_R:
		result = true;
		break;
	case LED_RGB_G:
		result = true;
		break;
	case LED_RGB_B:
		result = true;
		break;
	}

	return result;
}

uint8_t LedsOffAll(void)
{
	GPIOOff(GPIO_LED1);
	GPIOOff(GPIO_LED2);
	GPIOOff(GPIO_LED3);
	
	return true;
}

uint8_t LedsMask(uint8_t mask)
{

	return true;
}

/*==================[end of file]============================================*/
