#include <Arduino.h>
#include "main.h"
void blink(int time){
  digitalWrite(LED_BUILTIN,LOW);
  delay(time);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(time);
  digitalWrite(LED_BUILTIN,LOW);
}
