int led = 13;
int shock_sensor = 10;
int value;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(shock_sensor, INPUT);
  digitalWrite(shock_sensor, HIGH);
}

void loop(){
  value = digitalRead(shock_sensor);
  if (value == HIGH){
    digitalWrite(led, HIGH);
    delay(200);
  } else {
    digitalWrite(led, LOW);
  }
}