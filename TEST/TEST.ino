int sensorValue = 600;
int timer = 250;


void setup() {
  pinMode (12, OUTPUT);
  pinMode (11, OUTPUT);

}

void loop() {
  digitalWrite(12, HIGH);
  delay(timer);
  digitalWrite(12, LOW);
  delay(timer);
  digitalWrite(12, HIGH);
  delay(timer);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(timer);
  digitalWrite(11, LOW);
  delay(timer);
  digitalWrite(11, HIGH);
  delay(timer);
  digitalWrite(11, LOW);
}
