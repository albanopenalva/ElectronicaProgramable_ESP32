#ifndef LCD_ITSE0803_H
#define LCD_ITSE0803_H

/** \addtogroup Drivers_Programable Drivers Programable
 ** @{ */
/** \addtogroup Drivers_Devices Drivers devices
 ** @{ */
/** \addtogroup LCD_ITSE0803 LCD ITSE0803
 ** @{
 */

/*==================[inclusions]=============================================*/
#include <stdint.h>
#include <stdbool.h>
/*==================[macros]=================================================*/

/*==================[typedef]================================================*/

/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/

/** @brief Initialization function of EDU-CIAA LCD Modules
 *
 * @return TRUE if no error
 */
bool LcdItsE0803Init(void);

/** @brief Function to display value a LCD Module for EDU-CIAA
 *
 * @param[in] value to show 0..999
 *
 * @return false if an error occurs (out of scale), in other case returns true
 */
bool LcdItsE0803Write(uint16_t value);

/** @brief Function to read a number in LCD Module
 *
 * @return number in LCD Module
 */
uint16_t LcdItsE0803Read(void);

/** @brief Function to turn off LCD Module
 *
 */
void LcdItsE0803Off(void);

/** @brief DeInitialization function of EDU-CIAA LCD Module
 *
 * @return TRUE if no error
 */
bool LcdItsE0803DeInit(void);

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/** @} doxygen end group definition */

/*==================[end of file]============================================*/
#endif /* #ifndef DISPLAYITS_E0803_H */

