/*
#        ____                            ___  __ __
#       / __ \____ _____  __  ___      _|__ \/ // /
#      / / / / __ `/ __ \/ / / / | /| / /_/ / // /_
#     / /_/ / /_/ / / / / /_/ /| |/ |/ / __/__  __/
#    /_____/\__,_/_/ /_/\__, / |__/|__/____/ /_/   
#                      /____/                      
#   ESP8266 
#   Author:Danyw24
#   Github: https://github.com/Danyw24
#   Description: data reciver of handtracking program
#   Version: v0.3
#   Nodemcu v3 esp8266
*/
// Credenciales de red
char* SSID =  "SSID";
char* PASSWORD = "PASSWORD";

#include "main.h"
//Configuracion de los pines


// Dirección IP y puerto del servidor
IPAddress serverIP(192, 168, 1, 63);
const int serverPort = 8080;


void setup() {
 
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  // Conexión a la red WiFi
  ConnectToInternet(SSID, PASSWORD);
  ConnectToServer(serverIP, serverPort);

}

void loop() {
  // Verificar si el cliente está conectado al servidor
  SendData();
  ReciveData();
  delay(1000);
}
