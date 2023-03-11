#include <Arduino.h>
#include <ESP8266WiFi.h>

// Rename This file to WifiCon.cpp


void WifiCon() {

  WiFi.begin("ssid", "password");

  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
}