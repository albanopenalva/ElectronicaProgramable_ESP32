/*! @mainpage Blinking
 *
 * \section genDesc General Description
 *
 * This section describes how the program works.
 *
 * <a href="https://drive.google.com/...">Operation Example</a>
 *
 * \section hardConn Hardware Connection
 *
 * |   LED		    |   ESP32   	|
 * |:--------------:|:--------------|
 * | 	PIN1	 	| 	GPIO3		|
 *
 *
 * @section changelog Changelog
 *
 * |   Date	    | Description                                    |
 * |:----------:|:-----------------------------------------------|
 * | 12/09/2023 | Document creation		                         |
 *
 * @author Albano Peñalva (albano.penalva@uner.edu.ar)
 *
 */

/*==================[inclusions]=============================================*/
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "led.h"
/*==================[macros and definitions]=================================*/
#define CONFIG_BLINK_PERIOD 1000
/*==================[internal data definition]===============================*/

/*==================[internal functions declaration]=========================*/

/*==================[external functions definition]==========================*/
void app_main(void){
	LedsInit();
    while(true){
    	printf("LED ON\n");
		LedOn(LED_1);
		vTaskDelay(CONFIG_BLINK_PERIOD / portTICK_PERIOD_MS);
		printf("LED OFF\n");
		LedOff(LED_1);
		vTaskDelay(CONFIG_BLINK_PERIOD / portTICK_PERIOD_MS);
	}
}
/*==================[end of file]============================================*/
