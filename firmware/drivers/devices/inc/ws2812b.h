#ifndef WS2812B_H
#define WS2812B_H

/** \addtogroup Drivers_Programable Drivers Programable
 ** @{ */
/** \addtogroup Drivers_Devices Drivers devices
 ** @{ */
/** \addtogroup WS2812B WS2812B
 ** @{ */

/*==================[inclusions]=============================================*/
#include <stdint.h>
#include "sdkconfig.h"
#include "esp_err.h"
#include "gpio_mcu.h"
/*==================[macros]=================================================*/


/*==================[typedef]================================================*/
/**
 * @brief 
 * 
 */
typedef struct rgb_led{
	 uint8_t green;  		// Green
	 uint8_t red;  			// Red
	 uint8_t blue;  		// Blue
} rgb_led_t;

/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/

/**
 * @brief 
 * 
 * @param pin 
 */
void ws2812bInit(gpio_t pin);

/**
 * @brief 
 * 
 * @param data 
 */
void ws2812bSend(rgb_led_t led_color);

/**
 * @brief 
 * 
 */
void ws2812bSendRet(void);

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/** @} doxygen end group definition */
#endif

/*==================[end of file]============================================*/
