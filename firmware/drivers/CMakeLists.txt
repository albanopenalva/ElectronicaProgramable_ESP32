idf_build_get_property(target IDF_TARGET)

# Always compiled source files
set(srcs
    "microcontroller/src/gpio_mcu.c"
    "microcontroller/src/delay_mcu.c"
    "devices/src/led.c"
    "devices/src/switch.c"
    "devices/src/lcditse0803.c"
    "devices/src/hc_sr04.c"
    )

# Always included headers
set(includes "microcontroller/inc"
             "devices/inc")

idf_component_register(SRCS ${srcs}
                       INCLUDE_DIRS ${includes}
                       REQUIRES driver)