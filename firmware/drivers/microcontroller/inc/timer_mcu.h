#ifndef TIMER_MCU_H
#define TIMER_MCU_H
/** \brief Bare Metal example header file
 **
 ** This is a mini example of the CIAA Firmware
 **
 **/

/** \addtogroup Drivers_Programable Drivers Programable
 ** @{ */
/** \addtogroup Drivers_Microcontroller Drivers microcontroller
 ** @{ */
/** \addtogroup Timer Timer
 ** @{ */

/*==================[inclusions]=============================================*/
#include "stdint.h"
/*==================[macros]=================================================*/

/*==================[typedef]================================================*/
typedef enum timers {
	TIMER_A,					/*!< Timer A */
	TIMER_B,					/*!< Timer B */
	TIMER_C						/*!< Timer C */
} timer_mcu_t;
typedef struct {				/*!< Timer Struct */
		timer_mcu_t timer;			/*!< Timer Seleccionado */
		uint32_t period;		/*!< Periodo en us */
		void *func_p;			/*!< Puntero a funcion que se llamara repetitivamente */
		void *param_p;			/*!< Puntero a parámetros para función de interrupción */
} timer_config_t;
/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/

/** @brief Función de inicialización del Cronometro.
 * Configura el timer para trabajar con el SysTick (TIMER_A o TIMER_C) o con el RIT (TIMER_B).
 * No podran utilizarse el TIMER_A y el TIMER_C en simultaneo ya que ambos utlizan el mismo harware, la diferencia es que el TIMER_A
 * recibe el periodo en milisegundos y el TIMER_C recibe el periodo en microsegundos.
 *
 * @param[in] *timer_ini Puntero a estructura de inicializacion del timer.
 */
void TimerInit(timer_config_t *timer_ini);

/** @brief Funcion de comienzo de timer.
 * Se debe llamar siempre despues de TimerInit y cada vez que se haga un TimerStop.
 *
 * @param[in] timer Timer seleccionado.
 */
void TimerStart(timer_mcu_t timer);

/** @brief Funcion de prada de timer.
 * Se debe llamar luego de TimerStart, para detener la temporizacion.
 *
 * @param[in] timer Timer seleccionado.
 */
void TimerStop(timer_mcu_t timer);

/** @brief Funcion de reseteo del timer.
 * Se puede llamar en cualquier momento, reestablece a cero la cuenta del timer.
 *
 * @param[in] timer Timer seleccionado.
 */
void TimerReset(timer_mcu_t timer);

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/** @} doxygen end group definition */
#endif 
/*==================[end of file]============================================*/
