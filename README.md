# ESP8266 Receptor de Datos

Este proyecto implementa un receptor de datos utilizando el microcontrolador ESP8266. El ESP8266 se conecta a una red WiFi especificada y establece una conexión TCP/IP con un servidor remoto. Está diseñado para recibir datos de un programa de seguimiento de manos y realizar acciones basadas en los datos recibidos.

## Características

- **Conectividad WiFi**: El ESP8266 se conecta a una red WiFi utilizando las credenciales SSID y PASSWORD proporcionadas.
- **Conexión TCP/IP**: Establece una conexión TCP/IP con un servidor remoto especificado por la dirección IP del servidor y el puerto.
- **Recepción de Datos**: El ESP8266 recibe datos del servidor conectado y los procesa según sea necesario.
- **Indicación LED**: El programa puede hacer parpadear un LED conectado al ESP8266 según los datos recibidos. Por ejemplo, si los datos recibidos son "LEDHIGH", el LED parpadeará durante una duración específica.

## Instalación

Para configurar el receptor de datos ESP8266:

1. Clona este repositorio o descarga los archivos del proyecto.
2. Configura los componentes de hardware necesarios (por ejemplo, módulo ESP8266, LED).
3. Modifica el código para configurar el SSID, PASSWORD, la dirección IP y el puerto del servidor según la configuración de tu red y servidor.
4. Sube el código al microcontrolador ESP8266 utilizando el IDE de Arduino u otra herramienta compatible.
5. Conecta el ESP8266 a la fuente de alimentación designada y observa el LED para indicación de recepción de datos.

## Dependencias

Este proyecto requiere las siguientes dependencias:

- [Biblioteca ESP8266WiFi](https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266WiFi)

Asegúrate de instalar las bibliotecas requeridas antes de subir el código al ESP8266.

## Uso

1. Enciende el dispositivo ESP8266 y espera a que se conecte a la red WiFi configurada.
2. Una vez conectado, el ESP8266 establecerá una conexión TCP/IP con el servidor especificado.
3. El ESP8266 verificará continuamente si hay datos del servidor y realizará acciones según los datos recibidos.
4. Observa la consola serie para ver los datos recibidos y las indicaciones del LED.

## Contribuciones

Las contribuciones a este proyecto son bienvenidas. Si encuentras algún problema o tienes sugerencias para mejoras, no dudes en abrir un issue o enviar un pull request.


## Agradecimientos

Agradecimientos especiales a [Danyw24](https://github.com/Danyw24) por ser el autor y compartir este proyecto.
