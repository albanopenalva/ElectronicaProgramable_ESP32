#ifndef LED_H
#define LED_H
/** \addtogroup Drivers_Programable Drivers Programable
 ** @{ */
/** \addtogroup Drivers_Devices Drivers devices
 ** @{ */
/** \addtogroup LED Led
 ** @{ */

/*==================[inclusions]=============================================*/
#include <stdbool.h>
#include <stdint.h>
/*==================[macros]=================================================*/
/** @brief Definition of constants to reference the EDU-CIAA leds.
 */
typedef enum LEDs {LED_3=(1<<0),       /**<  */
                   LED_2=(1<<1),       /**<  */
                   LED_1=(1<<2),       /**<  */
                   LED_RGB_B=(1<<3),   /**<  */
                   LED_RGB_G=(1<<4),   /**<  */
                   LED_RGB_R=(1<<5)    /**<  */
                   } led_t;
/*==================[typedef]================================================*/

/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/

/** @fn void LedsInit(void)
 * @brief Initialization function of EDU-CIAA leds
 * Mapping ports (PinMux function), set direction and initial state of leds ports
 * @param[in] No parameter
 * @return TRUE if no error
 */
uint8_t LedsInit(void);

/** @fn uint8_t LedOn(uint8_t led)
 * @brief Function to turn on a specific led
 * @param[in] led
 * @return FALSE if an error occurs, in other case returns TRUE
 */
uint8_t LedOn(led_t led);

/** @fn uint8_t LedOff(uint8_t led)
 * @brief Function to turn off a specific led
 * @param[in] led
 * @return FALSE if an error occurs, in other case returns TRUE
 */
uint8_t LedOff(led_t led);

/** @fn uint8_t LedToggle(uint8_t led)
 * @brief Function to toggle a specific led
 * @param[in] led
 * @return FALSE if an error occurs, in other case returns TRUE
 */
uint8_t LedToggle(led_t led);

/** @fn uint8_t LedsOffAll(void)
 * @brief Function to turn off all led
 * @param[in] No Parameter
 * @return FALSE if an error occurs, in other case returns TRUE
 */
uint8_t LedsOffAll(void);

/** @fn uint8_t LedsMask(uint8_t mask)
 * @brief Function to turn on or off leds from a mask.
 * @param[in] mask
 */
uint8_t LedsMask(uint8_t mask);

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/** @} doxygen end group definition */

#endif /* #ifndef LED_H */

/*==================[end of file]============================================*/

