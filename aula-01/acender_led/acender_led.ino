int led_id = 13;
int time = 5000;

void setup() {
  pinMode(led_id, OUTPUT);
}

void loop() {
  digitalWrite(led_id, HIGH);
  delay(time);
  digitalWrite(led_id, LOW);
  delay(time - 2000);
}
