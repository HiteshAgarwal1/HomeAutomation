#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "d5c737c7d8554ae8aaa7ec95a8417414";

char ssid[] = "Hitesh Agarwal";
char pass[] = "99885566";

void setup()
{
  // Debug console
  Serial.begin(9600);
  int val=Serial.read();
    Serial.println(val);
  Blynk.begin(auth, ssid, pass);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  
    pinMode(D1,LOW);
    pinMode(D2,LOW);
    pinMode(D3,LOW);
    pinMode(D4,LOW);
}

void loop()
{
  
  
  Blynk.run();
  

  
}

