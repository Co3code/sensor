int ledPin = 13;
int buttonPin = 2;

bool ledState = false;       // remembers LED state
bool lastButtonState = HIGH; // for detecting press

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); 
}

void loop() {

  bool currentButtonState = digitalRead(buttonPin);

  // Detect button press (HIGH → LOW)
  if (lastButtonState == HIGH && currentButtonState == LOW) {
    
    ledState = !ledState;  // toggle LED state
    digitalWrite(ledPin, ledState);

    delay(200); // small debounce delay
  }

  lastButtonState = currentButtonState;
}