
#include <ESP8266WiFi.h>
#include "main.h"
WiFiClient client;


void ConnectToInternet(char* SSID, char* PASSWORD){
  WiFi.begin(SSID, PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando a la red WiFi...");
  }
  Serial.println("Conexión WiFi establecida");
}


void ConnectToServer(IPAddress serverIP, int serverPort){
    // Conexión al servidor TCP
  Serial.print("Conectando al servidor TCP en ");
  Serial.print(serverIP);
  Serial.print(":");
  Serial.println(serverPort);
  if (client.connect(serverIP, serverPort)) {
      Serial.println("Conexión al servidor establecida");
  } else {
      Serial.println("Error al conectar al servidor");
  }
}


void SendData(){
    if (client.connected()) {
    // Leer datos del servidor si están disponibles
    client.println("Datos desde el esp8266");


  } else {
    Serial.println("Conexión al servidor perdida");
    delay(2000);
  }
  
}


void ReciveData(){
    delay(500);
    while (client.available()) {
      String data = client.readStringUntil('\n');
      Serial.println("Datos recibidos del servidor: " + data);
      if (data == "LEDHIGH"){
        blink(2000);
      }
    }  
}
