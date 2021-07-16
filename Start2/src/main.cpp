#include <Arduino.h>

String saludo = "Welcome";
int count;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(100);
  Serial.println(saludo);
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  count = count +1;
  Serial.println(String(count));
  delay(500);
}