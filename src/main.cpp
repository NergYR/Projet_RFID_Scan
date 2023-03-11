#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <MFRC522.h>
#include <SPI.h>
#include <WifiCon.cpp>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println();
  WifiCon();
}

void loop() {
  // put your main code here, to run repeatedly:
}