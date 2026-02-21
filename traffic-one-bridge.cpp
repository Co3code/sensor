

int westBtn = 9;
int westRedLed = 5;
int westYellowLed = 6;
int westGreenLed = 7;

int eastBtn = 8;
int eastRedLed = 2;
int eastYellowLed = 3;
int eastGreenLed = 4;

bool westHasGreen = true;

void setup() {
  pinMode(westBtn, INPUT_PULLUP);
  pinMode(eastBtn, INPUT_PULLUP);

  pinMode(westRedLed, OUTPUT);
  pinMode(westYellowLed, OUTPUT);
  pinMode(westGreenLed, OUTPUT);

  pinMode(eastRedLed, OUTPUT);
  pinMode(eastYellowLed, OUTPUT);
  pinMode(eastGreenLed, OUTPUT);

  // Start state: WEST green, EAST red
  digitalWrite(westGreenLed, HIGH);
  digitalWrite(eastRedLed, HIGH);
}

void loop() {

  // WEST button pressed (WEST currently green)
  if (digitalRead(westBtn) == LOW && westHasGreen) {

    // WEST: green → yellow
    digitalWrite(westGreenLed, LOW);
    digitalWrite(westYellowLed, HIGH);
    delay(1500);

    // WEST: yellow → red
    digitalWrite(westYellowLed, LOW);
    digitalWrite(westRedLed, HIGH);
    delay(1500);

    // EAST: red → yellow
    digitalWrite(eastRedLed, LOW);
    digitalWrite(eastYellowLed, HIGH);
    delay(1500);

    // EAST: yellow → green
    digitalWrite(eastYellowLed, LOW);
    digitalWrite(eastGreenLed, HIGH);

    westHasGreen = false;

    // wait for button release
    while (digitalRead(westBtn) == LOW);
  }

  // EAST button pressed (EAST currently green)
  if (digitalRead(eastBtn) == LOW && !westHasGreen) {

    // EAST: green → yellow
    digitalWrite(eastGreenLed, LOW);
    digitalWrite(eastYellowLed, HIGH);
    delay(1500);

    // EAST: yellow → red
    digitalWrite(eastYellowLed, LOW);
    digitalWrite(eastRedLed, HIGH);
    delay(1500);

    // WEST: red → yellow
    digitalWrite(westRedLed, LOW);
    digitalWrite(westYellowLed, HIGH);
    delay(1500);

    // WEST: yellow → green
    digitalWrite(westYellowLed, LOW);
    digitalWrite(westGreenLed, HIGH);

    westHasGreen = true;

    // wait for button release
    while (digitalRead(eastBtn) == LOW);
  }
}
