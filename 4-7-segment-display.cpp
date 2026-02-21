
int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;

int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;

void setup() {
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
}

void loop() {
  // -----------------------
  // 0 on D1
  digitalWrite(D1, 0); digitalWrite(D2, 1); digitalWrite(D3, 1); digitalWrite(D4, 1);
  digitalWrite(pinA, HIGH); digitalWrite(pinB, HIGH); digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH); digitalWrite(pinE, HIGH); digitalWrite(pinF, HIGH); digitalWrite(pinG, LOW);
  delay(1000);

  // -----------------------
  // 1 on D2
  digitalWrite(D1, 1); digitalWrite(D2,0 ); digitalWrite(D3, 1); digitalWrite(D4, 1);
  digitalWrite(pinA, LOW); digitalWrite(pinB, HIGH); digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW); digitalWrite(pinE, LOW); digitalWrite(pinF, LOW); digitalWrite(pinG, LOW);
  delay(1000);

  // -----------------------
  // 2 on D3
  digitalWrite(D1, 1); digitalWrite(D2, 1); digitalWrite(D3, 0); digitalWrite(D4, 1);
  digitalWrite(pinA, HIGH); digitalWrite(pinB, HIGH); digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH); digitalWrite(pinE, HIGH); digitalWrite(pinF, LOW); digitalWrite(pinG, HIGH);
  delay(1000);

  // -----------------------
  // 3 on D4
  digitalWrite(D1, 1); digitalWrite(D2, 1); digitalWrite(D3, 1); digitalWrite(D4, 0);
  digitalWrite(pinA, HIGH); digitalWrite(pinB, HIGH); digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH); digitalWrite(pinE, LOW); digitalWrite(pinF, LOW); digitalWrite(pinG, HIGH);
  delay(1000);

  // -----------------------
  // 4 on D1
  digitalWrite(D1, 0); digitalWrite(D2, 1); digitalWrite(D3, 1); digitalWrite(D4, 1);
  digitalWrite(pinA, LOW); digitalWrite(pinB, HIGH); digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW); digitalWrite(pinE, LOW); digitalWrite(pinF, HIGH); digitalWrite(pinG, HIGH);
  delay(1000);

  // -----------------------
  // 5 on D2
  digitalWrite(D1, 1); digitalWrite(D2,0 ); digitalWrite(D3, 1); digitalWrite(D4, 1);
  digitalWrite(pinA, HIGH); digitalWrite(pinB, LOW); digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH); digitalWrite(pinE, LOW); digitalWrite(pinF, HIGH); digitalWrite(pinG, HIGH);
  delay(1000);

  // -----------------------
  // 6 on D3
  digitalWrite(D1, 1); digitalWrite(D2, 1); digitalWrite(D3, 0); digitalWrite(D4, 1);
  digitalWrite(pinA, HIGH); digitalWrite(pinB, LOW); digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH); digitalWrite(pinE, HIGH); digitalWrite(pinF, HIGH); digitalWrite(pinG, HIGH);
  delay(1000);

  // -----------------------
  // 7 on D4
  digitalWrite(D1, 1); digitalWrite(D2, 1); digitalWrite(D3, 1); digitalWrite(D4, 0);
  digitalWrite(pinA, HIGH); digitalWrite(pinB, HIGH); digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW); digitalWrite(pinE, LOW); digitalWrite(pinF, LOW); digitalWrite(pinG, LOW);
  delay(1000);

  // -----------------------
  // 8 on D1
  digitalWrite(D1, 0); digitalWrite(D2, 1); digitalWrite(D3, 1); digitalWrite(D4, 1);
  digitalWrite(pinA, HIGH); digitalWrite(pinB, HIGH); digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH); digitalWrite(pinE, HIGH); digitalWrite(pinF, HIGH); digitalWrite(pinG, HIGH);
  delay(1000);

  // -----------------------
  // 9 on D2
  digitalWrite(D1, 1); digitalWrite(D2, 0); digitalWrite(D3, 1); digitalWrite(D4, 1);
  digitalWrite(pinA, HIGH); digitalWrite(pinB, HIGH); digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH); digitalWrite(pinE, LOW); digitalWrite(pinF, HIGH); digitalWrite(pinG, HIGH);
  delay(1000);

  
  delay(1000);
}