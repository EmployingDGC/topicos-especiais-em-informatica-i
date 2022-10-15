int led_id_red = 13;
int led_id_yel = 12;
int led_id_gre = 11;
int time = 5000;

void setup() {
  pinMode(led_id_red, OUTPUT);
  pinMode(led_id_yel, OUTPUT);
  pinMode(led_id_gre, OUTPUT);
}

void loop() {
  digitalWrite(led_id_red, HIGH);
  digitalWrite(led_id_yel, LOW);
  digitalWrite(led_id_gre, LOW);
  delay(time);
  digitalWrite(led_id_red, LOW);
  digitalWrite(led_id_gre, HIGH);
  delay(time);
  digitalWrite(led_id_gre, LOW);
  digitalWrite(led_id_yel, HIGH);
  delay(time - 3000);
}
