#include <Ultrasonic.h>

int porta_trig = 7;
int porta_echo = 6;
float distancia = 0;

int led_id_red = 13;
int led_id_gre = 12;

Ultrasonic ultrasonic(porta_trig, porta_echo);

void setup() {
  pinMode(led_id_red, OUTPUT);
  pinMode(led_id_gre, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  distancia = ultrasonic.read();

  Serial.print("Distância = ");
  Serial.print(distancia);

  if (distancia < 20.0) {
    digitalWrite(led_id_red, HIGH);
    digitalWrite(led_id_gre, LOW);
  } else {
    digitalWrite(led_id_red, LOW);
    digitalWrite(led_id_gre, HIGH);
  }

  Serial.println(" cm");
  delay(100);
}
