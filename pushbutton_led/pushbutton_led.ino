/* project 1 pushbutton LED*/

const int buttonPin = 2; // pushbutton connected to pin 2
const int ledPin = 13; // LED connected to pin 13
int buttonState = 0; // give pushbutton a value

void setup() {
  pinMode(ledPin, OUTPUT); // set LED pin as output
  pinMode(buttonPin, INPUT); // set pushbutton pin as input

}

void loop() {
  buttonState = digitalRead(buttonPin); // read input from pin 2
  if (buttonState == HIGH) { //check if button is pressed
    digitalWrite(ledPin, HIGH); //turn on LED
  }
  else {
    digitalWrite(ledPin, LOW); //otherwise, turn off LED
  }
}
