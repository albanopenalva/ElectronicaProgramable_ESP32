#ifndef HC_SR04_H
#define HC_SR04_H

/** \addtogroup Drivers_Programable Drivers Programable
 ** @{ */
/** \addtogroup Drivers_Devices Drivers devices
 ** @{ */
/** \addtogroup HC_SR04 HC SR04
 ** @{ */

/*==================[inclusions]=============================================*/
#include <stdbool.h>
#include <stdint.h>
#include "gpio_mcu.h"
/*==================[macros]=================================================*/

/*==================[typedef]================================================*/

/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/

/** @brief Initialization function of HC_SR04
 *
 * @param[in] echo pin GPIO where is connected echo port of peripheral
 *
 * @param[in] trigger pin GPIO where is connected trigger port of peripheral
 *
 * @return TRUE if no error
 */
bool HcSr04Init(gpio_t echo, gpio_t trigger);


/** @brief Function to measure the distance in centimeters
 *
 * @return distance in centimeters
 */
uint16_t HcSr04ReadDistanceInCentimeters(void);

/** @brief Function to measure the distance in inches
 *
 * @return distance in inches
 */
uint16_t HcSr04ReadDistanceInInches(void);

/** @brief Function to deinitialize HC_SR04 driver
 *
 * @return TRUE if no error
 */
bool HcSr04Deinit(void);

/*==================[end of file]============================================*/
#endif /* #ifndef HC_SR04_H */

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/** @} doxygen end group definition */
