VERSION 3 
7displayv3

// ===== Segment pins (A–G) =====
const int pinA = 2;
const int pinB = 3;
const int pinC = 4;
const int pinD = 5;
const int pinE = 6;
const int pinF = 7;
const int pinG = 8;

// ===== Digit select pins =====
const int D1 = 9;
const int D2 = 10;
const int D3 = 11;
const int D4 = 12;

// Common Cathode numbers
bool numbers[10][7] = {
  {HIGH,HIGH,HIGH,HIGH,HIGH,HIGH,LOW},   
  {LOW,HIGH,HIGH,LOW,LOW,LOW,LOW},       
  {HIGH,HIGH,LOW,HIGH,HIGH,LOW,HIGH},    
  {HIGH,HIGH,HIGH,HIGH,LOW,LOW,HIGH},    
  {LOW,HIGH,HIGH,LOW,LOW,HIGH,HIGH},     
  {HIGH,LOW,HIGH,HIGH,LOW,HIGH,HIGH},    
  {HIGH,LOW,HIGH,HIGH,HIGH,HIGH,HIGH},   
  {HIGH,HIGH,HIGH,LOW,LOW,LOW,LOW},      
  {HIGH,HIGH,HIGH,HIGH,HIGH,HIGH,HIGH},  
  {HIGH,HIGH,HIGH,HIGH,LOW,HIGH,HIGH}    
};

void setup() {
  for(int i=2;i<=12;i++) pinMode(i, OUTPUT);
}

// Turn all digits OFF
void disableAll() {
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
}

// Set segments for a number
void setSegments(int num) {
  digitalWrite(pinA, numbers[num][0]);
  digitalWrite(pinB, numbers[num][1]);
  digitalWrite(pinC, numbers[num][2]);
  digitalWrite(pinD, numbers[num][3]);
  digitalWrite(pinE, numbers[num][4]);
  digitalWrite(pinF, numbers[num][5]);
  digitalWrite(pinG, numbers[num][6]);
}

void loop() {
  int digitPosition = 0;  // which digit to light (0–3)

  for (int count = 0; count <= 10; count++) {

    disableAll();  // Turn everything OFF

    int numberToShow = count;
    if (numberToShow > 9) numberToShow = 0;  // For 10, just show 0

    setSegments(numberToShow);

    // Turn on only the correct digit (active LOW)
    if (digitPosition == 0) digitalWrite(D1, LOW);
    if (digitPosition == 1) digitalWrite(D2, LOW);
    if (digitPosition == 2) digitalWrite(D3, LOW);
    if (digitPosition == 3) digitalWrite(D4, LOW);

    delay(1000);  // 1 second per number

    digitPosition++;
    if (digitPosition > 3) digitPosition = 0;
  }
}