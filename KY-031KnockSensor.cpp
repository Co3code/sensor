int Led = 13;
int Shock = 3;
int val;
unsigned long lastHeartbeat = 0;

void setup() {
  pinMode(Led, OUTPUT);
  pinMode(Shock, INPUT_PULLUP); // Using internal pull-up for stability
  Serial.begin(9600);
  Serial.println("--- System Reset & Ready ---");
}

void loop() {
  val = digitalRead(Shock);

  if (val == LOW) { // With INPUT_PULLUP, LOW usually means "Triggered"
    digitalWrite(Led, HIGH);
    Serial.println("!!! SHOCK DETECTED !!!");
    delay(200); // Give it a moment to breathe
  } else {
    digitalWrite(Led, LOW);
  }

  if (millis() - lastHeartbeat > 2000) {
    Serial.println("... Still Monitoring ...");
    lastHeartbeat = millis();
  }
}
