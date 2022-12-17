#define bd 6  // baixo direita
#define cc 7  // cima cima
#define cd 8  // cima direita
#define p  9  // ponto
#define bb 10 // baixo baixo
#define be 11 // baixo esquerda
#define m  12 // meio
#define ce 13 // cima esquerda

void toggle_0(int value) {
  digitalWrite(bd, value);
  digitalWrite(cc, value);
  digitalWrite(cd, value);
  digitalWrite(bb, value);
  digitalWrite(be, value);
  digitalWrite(ce, value);
}

void toggle_1(int value) {
  digitalWrite(bd, value);
  digitalWrite(cd, value);
}

void toggle_2(int value) {
  digitalWrite(cc, value);
  digitalWrite(cd, value);
  digitalWrite(m, value);
  digitalWrite(be, value);
  digitalWrite(bb, value);
}

void toggle_3(int value) {
  digitalWrite(cc, value);
  digitalWrite(cd, value);
  digitalWrite(m, value);
  digitalWrite(bd, value);
  digitalWrite(bb, value);
}

void toggle_4(int value) {
  digitalWrite(ce, value);
  digitalWrite(m, value);
  digitalWrite(cd, value);
  digitalWrite(bd, value);
}

void toggle_5(int value) {
  digitalWrite(cc, value);
  digitalWrite(ce, value);
  digitalWrite(m, value);
  digitalWrite(bd, value);
  digitalWrite(bb, value);
}

void toggle_6(int value) {
  digitalWrite(cc, value);
  digitalWrite(cd, value);
  digitalWrite(m, value);
  digitalWrite(bd, value);
  digitalWrite(bb, value);
  digitalWrite(be, value);
}

void toggle_7(int value) {
  digitalWrite(cc, value);
  digitalWrite(cd, value);
  digitalWrite(bd, value);
}

void toggle_8(int value) {
  digitalWrite(bd, value);
  digitalWrite(cc, value);
  digitalWrite(cd, value);
  digitalWrite(bb, value);
  digitalWrite(be, value);
  digitalWrite(m, value);
  digitalWrite(ce, value);
}

void toggle_9(int value) {
  digitalWrite(bd, value);
  digitalWrite(cc, value);
  digitalWrite(cd, value);
  digitalWrite(bb, value);
  digitalWrite(m, value);
  digitalWrite(ce, value);
}

void setup() {
  pinMode(bd, OUTPUT);
  pinMode(cc, OUTPUT);
  pinMode(cd, OUTPUT);
  pinMode(p, OUTPUT);
  pinMode(bb, OUTPUT);
  pinMode(be, OUTPUT);
  pinMode(m, OUTPUT);
  pinMode(ce, OUTPUT);
}

void toggle_number(int num, int value) {
  switch (num) {
    case 0: toggle_0(value); break;
    case 1: toggle_1(value); break;
    case 2: toggle_2(value); break;
    case 3: toggle_3(value); break;
    case 4: toggle_4(value); break;
    case 5: toggle_5(value); break;
    case 6: toggle_6(value); break;
    case 7: toggle_7(value); break;
    case 8: toggle_8(value); break;
    case 9: toggle_9(value); break;
  }
}

void loop() {
  for (int i = 0; i < 10; i += 1) {
    toggle_number(i, HIGH);
    delay(1000);
    toggle_number(i, LOW);
    delay(1000);
  }
}
