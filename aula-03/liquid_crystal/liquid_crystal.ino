#include <LiquidCrystal.h> //Carrega a biblioteca LCD
#include <DHT.h> //Carrega a biblioteca DHT
#define DHTPIN A5 //Define a ligação ao pino de dados do sensor
#define DHTTYPE DHT11 //Define o tipo de sensor DHT utilizado

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte grau[8] ={
  B00001100,
  B00010010,
  B00010010,
  B00001100,
  B00000000,
  B00000000,
  B00000000,
  B00000000
};

void setup() {
  Serial.begin(9600); //Inicializa a serial
  lcd.begin(16,2); //Inicializa LCD
  lcd.clear(); //Limpa o LCD
  lcd.createChar(0, grau); //Cria o caractere com o símbolo do grau
  dht.begin();
}

void loop() {
  float h = dht.readHumidity(); //Le o valor da umidade
  float t = dht.readTemperature(); //Le o valor da temperatura
  lcd.setCursor(0,0); //coloca o cursor na posição col0,lin0
  lcd.print("Temp : "); //escreve Temp:
  lcd.print(" "); //escreve um espaço em branco
  lcd.setCursor(7,0); //coloca o cursor coluna 7 linha 0
  lcd.print(t,1); //escreve o valor de t
  lcd.setCursor(12,0); //coloca o cursor na coluna 12 linha 0
  lcd.write((byte)0); //Mostra o símbolo do grau formado pelo array
  lcd.setCursor(0,1); //coloca o cursor na coluna 0 linha 1
  lcd.print("Umid : "); //escreve Umid :
  lcd.print(" "); //escreve um espaço em branco
  lcd.setCursor(7,1); //coloca o cursor na coluna 7 linha 1
  lcd.print(h,1); //escreve o valor de h
  lcd.setCursor(12,1); //coloca o cursor na coluna 12 linha 1
  lcd.print("%"); //escreve o caractere %
  delay(2000);
}
