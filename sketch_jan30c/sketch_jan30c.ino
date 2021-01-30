#if defined(ESP8266)
#include <ESP8266WiFi.h>          //https://github.com/esp8266/Arduino
#else
#include <WiFi.h>          //https://github.com/esp8266/Arduino
#endif
#include <DNSServer.h>
#if defined(ESP8266)
#include <ESP8266WebServer.h>
#else
#include <WebServer.h>
#endif
#include <WiFiManager.h>         //https://github.com/tzapu/WiFiManager
void setup() {
  
  Serial.begin(115200);
  WiFiManager wifiManager;
  
  wifiManager.autoConnect("AutoConnectAP");
  
  Serial.println("connected...yeey :)");
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("Connected: "+String(WiFi.SSID()));
  Serial.println("with Password: "+String(WiFi.psk()));
  Serial.println("IP "+WiFi.localIP().toString());
  
}
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
}
