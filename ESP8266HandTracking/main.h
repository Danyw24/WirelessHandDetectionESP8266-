
#include <ESP8266WiFi.h>

void ConnectToInternet(char* SSID, char* PASSWORD);
void ConnectToServer(IPAddress serverIP, int serverPort);
void blink(int time);
void SendData();
void ReciveData();
