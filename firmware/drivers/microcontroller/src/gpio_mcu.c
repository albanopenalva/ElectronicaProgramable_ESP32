/** \addtogroup GIOP
 ** @{
*/
/*==================[inclusions]=============================================*/
#include "gpio_mcu.h"
#include <stdint.h>
#include "driver/gpio.h"
/*==================[macros and definitions]=================================*/
typedef struct{
	uint64_t pin;				/*!< GPIO pin */
	gpio_mode_t mode;			/*!< Input/Output mode */
	gpio_pull_mode_t pull;		/*!< GPIO pull-up/pull-down resistor */
	bool state;					/*!< GPIO output state */
} digital_io_t;
/*==================[internal data declaration]==============================*/

/*==================[internal functions declaration]=========================*/

/*==================[internal data definition]===============================*/
digital_io_t gpio_list[] = {
	{GPIO_NUM_0, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO0*/
	{GPIO_NUM_1, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO1*/
	{GPIO_NUM_2, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO2*/
	{GPIO_NUM_3, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO3*/
	{GPIO_NUM_4, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO4*/
	{GPIO_NUM_5, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO5*/
	{GPIO_NUM_12, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO12*/
	{GPIO_NUM_13, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO13*/
	{GPIO_NUM_14, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO14*/
	{GPIO_NUM_15, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO15*/
	{GPIO_NUM_16, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO16*/
	{GPIO_NUM_17, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO17*/
	{GPIO_NUM_18, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO18*/
	{GPIO_NUM_19, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO19*/
	{GPIO_NUM_21, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO21*/
	{GPIO_NUM_22, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO22*/
	{GPIO_NUM_23, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO23*/
	{GPIO_NUM_25, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO25*/
	{GPIO_NUM_26, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO26*/
	{GPIO_NUM_27, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO27*/
	{GPIO_NUM_32, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO32*/
	{GPIO_NUM_33, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO33*/
	{GPIO_NUM_34, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO34*/
	{GPIO_NUM_35, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO35*/
	{GPIO_NUM_36, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO36*/
	{GPIO_NUM_39, GPIO_MODE_DISABLE, GPIO_PULLUP_ONLY, false}, /* Configuration GPIO39*/
};
/*==================[external data definition]===============================*/

/*==================[internal functions definition]==========================*/

/*==================[external functions definition]==========================*/
void GPIOInit(gpio_t pin, io_t io){
	if(io == GPIO_INPUT){
		gpio_list[pin].mode = GPIO_MODE_INPUT;
	} else if(io == GPIO_OUTPUT){
		gpio_list[pin].mode = GPIO_MODE_OUTPUT;
	}
	gpio_reset_pin(gpio_list[pin].pin);
	gpio_set_direction(gpio_list[pin].pin, gpio_list[pin].mode);
	gpio_set_pull_mode(gpio_list[pin].pin, gpio_list[pin].pull);
}

void GPIOOn(gpio_t pin){
	gpio_list[pin].state = true;
	gpio_set_level(gpio_list[pin].pin, gpio_list[pin].state);
}

void GPIOOff(gpio_t pin){
	gpio_list[pin].state = false;
	gpio_set_level(gpio_list[pin].pin, gpio_list[pin].state);
}

void GPIOState(gpio_t pin, bool state){
	gpio_list[pin].state = state;
	gpio_set_level(gpio_list[pin].pin, gpio_list[pin].state);
}

void GPIOToggle(gpio_t pin){
	gpio_list[pin].state = !gpio_list[pin].state;
	gpio_set_level(gpio_list[pin].pin, gpio_list[pin].state);
}

bool GPIORead(gpio_t pin){
	return gpio_get_level(gpio_list[pin].pin);
}

void GPIODeinit(void){
	
}

/** @} doxygen end group definition */
/*==================[end of file]============================================*/
