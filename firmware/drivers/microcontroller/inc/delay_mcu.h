#ifndef DELAY_MCU_H
#define DELAY_MCU_H
/** \addtogroup Drivers_Programable Drivers Programable
 ** @{ */
/** \addtogroup Drivers_Devices Drivers devices
 ** @{ */
/** \addtogroup Delay
 ** @{ */

/* @brief  EDU-CIAA NXP GPIO driver
 * @author Albano Peñalva
 *
 * This driver provide functions to generate delays 
 *
 * @note
 *
 * @section changelog
 *
 * |   Date	    | Description                                    |
 * |:----------:|:-----------------------------------------------|
 * | 26/11/2018 | Document creation		                         |
 *
 */

/*==================[inclusions]=============================================*/
#include <stdint.h>
/*==================[macros]=================================================*/

/*==================[typedef]================================================*/

/*==================[internal data declaration]==============================*/

/*==================[internal functions declaration]=========================*/
/**
 * @brief Delay in seconds
 * @param[in] sec seconds to be in delay
 * @return None
 */
void DelaySec(uint16_t sec);

/**
 * @brief Delay in milliseconds
 * @param[in] msec milliseconds to be in delay
 * @return None
 */
void DelayMs(uint16_t msec);

/**
 * @brief Delay in microseconds
 * @param[in] usec microseconds to be in delay
 * @return None
 */
void DelayUs(uint16_t usec);
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/** @} doxygen end group definition */
#endif /* DELAY_H_ */
/*==================[end of file]============================================*/
