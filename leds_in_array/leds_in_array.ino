// put leds into array and light them one at a time

const int led1 = 13;
const int led2 = 12;
int lights[] = {led1, led2};


void setup() {
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
}


// THIS LIGHTS UP both
void loop() {
  digitalWrite (led1, LOW);
  digitalWrite (led2, HIGH);
  delay:(1000);
  digitalWrite (led2, LOW);
  digitalWrite (led1, HIGH);
 }
