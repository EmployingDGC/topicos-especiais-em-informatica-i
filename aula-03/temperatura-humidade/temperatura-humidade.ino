#include <DHT.h>

#define DHTPIN A5
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("Humidade: ");
  Serial.println(h);
  Serial.print("temperatura: ");
  Serial.println(t);
  Serial.println(" ");
  delay(2000);
}
