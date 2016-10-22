// push button led written from scratch

// set variables

const int led = 13;
const int button = 2;
int buttonState = 0;


//set input/output states

void setup() {
  pinMode (led, OUTPUT);
  pinMode (button, INPUT);

}

// check for button to be pushed, and if it is, light up the LED

void loop() {
  buttonState = digitalRead(button);

  if (buttonState == HIGH) {
    digitalWrite (led, HIGH);
  }

  else {
    digitalWrite (led, LOW);
  }

}
