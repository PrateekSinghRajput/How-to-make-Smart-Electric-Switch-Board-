
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

  char auth[] = "UyH4PNz3vaRuyH-LS8-vRICldZQgB1m6";
char ssid[] = "justDo";     //Enter your WIFI Name
char pass[] = "pratik123";  //Enter your WIFI Password

void setup() {
  // Debug console
  Serial.begin(9600);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);

  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);

  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}
