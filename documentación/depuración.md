# Grabación y Depuración 

A continuación se detallan los pasos para la grabación de la placa ESP32-C6-DevKitC-1 con un programa compilado, y para el manejo de las herramientas depuración.

1. [Grabación](#Grabación)
2. [Depuración](#Depuración)
3. [Monitor Serie](#Monitor-Serie)

## Grabación

1. Conecte la placa ESP32-C6-DevKitC-1 a su computadora utilizando un cable USB-C en el conector señalado como `USB`.

    ![flash1](./imágenes/flash1.png)
	
2. Presione el botón `ESP-IDF Flash Device`. La primera vez que realice la grabación le aparecerá una ventana prguntando si desea lanzar OpenOCD, presione `Yes`.
 
    ![flash2](./imágenes/flash2.png)
	
3. El programa comenzará con la grabación del microcontrolador. 
Si esta se completa correctamente, podrá observar el mensaje `Flashed Successfully (JTag)` en la pestaña `OUTPUT`.
	
    ![flash3](./imágenes/flash3.png)
	
	Si observa la placa, también podrá observar el parpadeo del LED1.
	
## Depuración
El modo de Depuración (Debug) nos permite correr el código del programa de manera controlada en el microcontrolador, a la vez que se pueden observar los valores de variables y registros. 
Para entrar en modo Depuración se debe:

1. Asegúrese de que OpenOCD esté corriendo.

    ![debug1](./imágenes/debug1.png)
	
    En caso contrario, inícielo presionando en `OpenOCD Server (Stoped)` y luego en `Start OpenOCD`.

    ![debug2](./imágenes/debug2.png)
	
2. Cambie a la vista `Run and Debug` y luego seleccione en el menú desplegable el proyecto sobre el cual realizar debug (en este caso `ESP32 OpenOCD (0_blinking)`).

    ![debug3](./imágenes/debug3.png)

3. Presione el botón `Start Debuging` o `F5`. Una vez iniciado el modo debug se mostrará una nueva barra con botones para el control de la ejecución del programa.

    ![debug4](./imágenes/debug4.png)
	
## Monitor Serie