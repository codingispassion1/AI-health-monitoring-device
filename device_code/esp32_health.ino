#include <Wire.h>
#include <WiFi.h>
#include <FirebaseESP32.h>
#include "MAX30100_PulseOximeter.h"

#define WIFI_SSID "YourWiFi"
#define WIFI_PASSWORD "YourPass"
#define FIREBASE_HOST "your-project.firebaseio.com"
#define FIREBASE_AUTH "your-db-secret"

FirebaseData firebaseData;
PulseOximeter pox;
uint32_t lastReport = 0;

void setup() {
  Serial.begin(115200);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500); Serial.print(".");
  }
  Serial.println("WiFi connected");

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  pox.begin();
}

void loop() {
  pox.update();
  if (millis() - lastReport > 1000) {
    lastReport = millis();
    int bpm = pox.getHeartRate();
    int spo2 = pox.getSpO2();

    Firebase.setInt(firebaseData, "/patient1/bpm", bpm);
    Firebase.setInt(firebaseData, "/patient1/spo2", spo2);

    Serial.print("HeartRate: "); Serial.print(bpm);
    Serial.print(" | SpO2: "); Serial.println(spo2);
  }
}