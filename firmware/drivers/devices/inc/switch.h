#ifndef SWITCH_H
#define SWITCH_H
/** \addtogroup Drivers_Programable Drivers Programable
 ** @{ */
/** \addtogroup Drivers_Devices Drivers devices
 ** @{ */
/** \addtogroup Switch
 ** @{ */

/** @brief Bare Metal header for switches in EDU-CIAA NXP
 **
 ** This is a driver for four switches mounted on the board
 **
 **/

/*==================[inclusions]=============================================*/
#include <stdbool.h>
#include <stdint.h>
/*==================[macros]=================================================*/

/*==================[typedef]================================================*/
typedef enum switches {SWITCH_1=(1<<0),  /**<  */
                       SWITCH_2=(1<<1),  /**<  */
                       SWITCH_3=(1<<2),  /**<  */
                       SWITCH_4=(1<<3)   /**<  */
                       } switch_t;
/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/
/** @brief Initialization function to control basic push-buttons in the EDU-CIAA BOARD
 * This function initialize the four switches present in the EDU-CIAA board
 * @return true if no error
 */
int8_t SwitchesInit(void);

/** @brief Function to read basic push-buttons
 * The function returns a 8 bits word, where the first four binaries positions represent each push-button.
 * @return 0 if no key pressed, SWITCH_1 SWITCH_2 SWITCH_3 SWITCH_4 in other case.
 */
int8_t SwitchesRead(void);

/** @brief Enables the interruption of a particular key and assigns a group of interrupts defined in @ref switchgp_t
 * @param[in] gp Indicates to which group of interrupts the key is assigned
 * @param[in] tec Key that will interrupt
 * @param[in] ptrIntFunc Function to be called in the interruption
 */
void SwitchActivInt(switch_t tec, void *ptrIntFunc);

/** @brief Activate group interrupts and add to the interruption the chosen keys through the mask
 * @param[in] tecs Mask of keys that will be added to the group to interrupt. Where bit0-TEC4, bit1-TEC3, bit2-TEC2 and bit4-TEC1.
 * @param[in] void * Function to be called in the interruption.
 */
void SwitchesActivGroupInt(switch_t tecs, void *ptrIntFunc);

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/** @} doxygen end group definition */

/*==================[end of file]============================================*/
#endif /* #ifndef SWITCH_H */

