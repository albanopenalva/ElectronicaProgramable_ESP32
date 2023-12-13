# Instalación 

Para las prácticas de laboratorio se utilizará la placa ESP32-C6-DevKitC-1 como hardware y el software Visual Studio Code como entorno integrado de desarrollo (IDE de sus siglas en inglés). 
Para que este último sea capaz de programar la placa de desarrollo es necesario descargar componentes de software adicionales. 
Además, es necesario descargar la herramienta Git para trabajar con repositorios como lo haremos en el cursado. 
A continuación se detallan los pasos necesarios para la instalación de estas herramientas:
1. [Git](#Git)
2. [Doxygen](#Doxygen)
3. [Visual Studio Code](#Visual-Studio-Code)
4. [ESP IDF](#ESP-IDF)

## Git

Git es un software utilizado para llevar correctamente un registro de cambios en un conjunto de archivos, al mismo tiempo que permite el trabajo colaborativo entre programadores. 
Para la instalación del paquete diríjase a la siguiente [página](https://git-scm.com/downloads) y seleccione la versión correspondiente a su sistema operativo. 
En el caso de ser Windows descargue el instalador “Standalone” para la arquitectura de su ordenador.  
Ejecute el instalador, observará una ventana como en la siguiente figura:
![git](./imágenes/git.png)
Elija en cada ventana la opción por defecto y luego presione instalar. 
En el caso de utilizar Linux, para la mayoría de las distribuciones basta con correr los siguientes comando en una terminal para instalar el paquete git:
```
sudo apt-get update
sudo apt-get install git
```

## Doxygen

El paquete Doxygen permite automatizar la generación de documentación de código utilizando una serie de comandos reservados dentro de los comentarios. 
Para descargarlo, diríjase al siguiente [link](https://www.doxygen.nl/download.html) en la sección “Sources and binaries”. 
Los paquetes para linux tienen la extensión “tar.gz”, “.dmg” para mac OS y “.exe” para Windows 64 bits. 
A continuación se observa la ventana inicial del instalador para este último sistema operativo. 
Seleccione las opciones por defecto y presione instalar. 
![doxygen](./imágenes/doxygen.png)

## Visual Studio Code
