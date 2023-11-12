#ifndef NEOPIXEL_H
#define NEOPIXEL_H

/** \addtogroup Drivers_Programable Drivers Programable
 ** @{ */
/** \addtogroup Drivers_Devices Drivers devices
 ** @{ */
/** \addtogroup NeoPixel_Stripe NeoPixel_Stripe
 ** @{ */

/*==================[inclusions]=============================================*/
#include <stdint.h>
#include "sdkconfig.h"
#include "esp_err.h"
#include "gpio_mcu.h"
/*==================[macros]=================================================*/
#define BUILT_IN_RGB_LED_PIN        GPIO_8  /*> Board's NeoPixel it's connected at GPIO_8 */
#define BUILT_IN_RGB_LED_LENGTH     1       /*> Board's NeoPixel has one pixel */

#define NEOPIXEL_WHITE          0x00FFFFFF  /*> Color white */
#define NEOPIXEL_RED            0x00FF0000  /*> Color red */
#define NEOPIXEL_GREEN          0x0000FF00  /*> Color green */
#define NEOPIXEL_BLUE           0x000000FF  /*> Color blue */
#define NEOPIXEL_YELLOW         0x007F7F00  /*> Color yellow */
#define NEOPIXEL_CYAN           0x0000F7F7  /*> Color cyan */
#define NEOPIXEL_MAGENTA        0x007F007F  /*> Color magenta */
#define NEOPIXEL_ORANGE         0x00FF7D00  /*> Color orange */
#define NEOPIXEL_LGREEN         0x007DFF00  /*> Color ligth green */
#define NEOPIXEL_TURQUOISE      0x0000FF7D  /*> Color turquoise */
#define NEOPIXEL_OCEAN          0x00007DFF  /*> Color ocean */
#define NEOPIXEL_VIOLET         0x007D00FF  /*> Color violet */
#define NEOPIXEL_ROSE           0x00FF007D  /*> Color rose */

/*==================[typedef]================================================*/
/**
 * @brief 
 * 
 * 0x00FF0000 -> Red
 * 0x0000FF00 -> Green
 * 0x000000FF -> Blue
 * 
 */
typedef uint32_t neopixel_color_t;
/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/

/**
 * @brief 
 * 
 * @param pin 
 * @param len 
 * @param color_array 
 */
void NeoPixelInit(gpio_t pin, uint16_t len, neopixel_color_t *color_array);

/**
 * @brief 
 * 
 */
void NeoPixelAllOff(void);

/**
 * @brief 
 * 
 * @param color 
 */
void NeoPixelAllColor(neopixel_color_t color);

/**
 * @brief 
 * 
 * @param pixel 
 * @param color 
 */
void NeoPixelSetPixel(uint16_t pixel, neopixel_color_t color);

/**
 * @brief 
 * 
 * @param color_array 
 */
void NeoPixelSetArray(neopixel_color_t *color_array);

/**
 * @brief 
 * 
 * @param upwards 
 */
void NeoPixelShift(bool upwards);

/**
 * @brief 
 * 
 * @param bright 
 */
void NeoPixelBrightness(uint8_t bright);

/**
 * @brief 
 * 
 * @param first_hue 
 * @param sat 
 * @param val 
 * @param reps 
 */
void NeoPixelRainbow(uint16_t first_hue, uint8_t sat, uint8_t val, uint8_t reps);

/**
 * @brief 
 * 
 * @param red 
 * @param green 
 * @param blue 
 * @return neopixel_color_t 
 */
neopixel_color_t NeoPixelRgb2Color(uint8_t red, uint8_t green, uint8_t blue);

/**
 * @brief 
 * 
 * @param hue 
 * @param sat 
 * @param val 
 * @return neopixel_color_t 
 */
neopixel_color_t NeoPixelHSV2Color(uint16_t hue, uint8_t sat, uint8_t val);

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/** @} doxygen end group definition */
#endif

/*==================[end of file]============================================*/
