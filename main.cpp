void setup() {
  pinMode(13, OUTPUT);   // LED
  pinMode(2, INPUT);     // Button
}

void loop() {
  int buttonState = digitalRead(2);

  if (buttonState == HIGH) {
    digitalWrite(13, HIGH);  
  } else {
    digitalWrite(13, LOW);   
  }
}