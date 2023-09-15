#ifndef INC_GPIO_H_
#define INC_GPIO_H_
/** \addtogroup Drivers_Programable Drivers Programable
 ** @{ */
/** \addtogroup Drivers_Microcontroller Drivers microcontroller
 ** @{ */
/** \addtogroup GIOP GPIO
 */

/*==================[inclusions]=============================================*/
#include <stdbool.h>
#include <stdint.h>
/*==================[macros]=================================================*/

/*==================[typedef]================================================*/
/** @typedef io_t
 * @brief  
 */
typedef enum {GPIO_INPUT = 0, GPIO_OUTPUT} io_t;
/** @typedef gpio_t
 * @brief  Define los puertos de la EDU-CIAA
 */
typedef enum {
	GPIO_0=0, /**<  */
	GPIO_1, /**<  */
	GPIO_2, /**<  */
	GPIO_3, /**<  */
	GPIO_4, /**<  */
	GPIO_5, /**<  */
	GPIO_12, /**<  */
	GPIO_13, /**<  */
	GPIO_14, /**<  */
	GPIO_15, /**<  */
	GPIO_16, /**<  */
	GPIO_17, /**<  */
	GPIO_18, /**<  */
	GPIO_19, /**<  */
	GPIO_21, /**<  */
	GPIO_22, /**<  */
	GPIO_23, /**<  */
	GPIO_25, /**<  */
	GPIO_26, /**<  */
	GPIO_27, /**<  */
	GPIO_32, /**<  */
	GPIO_33, /**<  */
	GPIO_34, /**<  */
	GPIO_35, /**<  */
	GPIO_36, /**<  */
	GPIO_39, /**<  */
} gpio_t;

/*==================[internal data declaration]==============================*/

/*==================[internal functions declaration]=========================*/
/** @fn void GPIOInit(void)
 * @brief Inicializacion de los puertos GPIO de la EDU-CIAA
 */
void GPIOInit(gpio_t pin, io_t io);

/** @fn void GPIOOn(gpio_t pin)
 * @brief Pone a 1 un pin de la EDU-CIAA
 * @param[in] pin Pin que se desea poner a 1
 */
void GPIOOn(gpio_t pin);

/** @fn void GPIOOff(gpio_t pin)
 * @brief Apaga un pin de la EDU-CIAA
 * @param[in] pin Pin que se desea poner a 0
 */
void GPIOOff(gpio_t pin);

/** @fn void GPIOState(gpio_t pin)
 * @brief Indica el estado de un pin de la EDU-CIAA
 * @param[in] pin Pin que se desea prender o apagar
 * @param[in] state Estado del pin (1: prendido o 0: apagado)
 */
void GPIOState(gpio_t pin, bool state);

/** @fn void GPIOToggle(gpio_t pin)
 * @brief Invierte el estado de un pin de la EDU-CIAA
 * @param[in] pin Pin que se desea invertir
 */
void GPIOToggle(gpio_t pin);

/** @fn bool GPIORead(gpio_t pin)
 * @brief Lectura de un pin de la EDU-CIAA
 * @param[in] pin Pin a leer el estado
 * @return Booleano que indica el estado del pin
 */
bool GPIORead(gpio_t pin);

/** @brief Deinicializacion de los puertos GPIO de la EDU-CIAA
 */
void GPIODeinit(void);

/*==================[end of file]============================================*/
#endif /* INC_GPIO_H_ */

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/** @} doxygen end group definition */
