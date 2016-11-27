//modified LED bar graph. lights each LED in sequence and then powers them down in reverse order


const int ledCount = 9; //number of LEDs
int ledPins[] = {2,3,4,5,6,8,9,10,11}; //pins connected to LEDs
int wait = 100; // amount of time to wait between each LED


void setup() {
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT); // set the LED pins as output
    }
   }
 
void loop() {
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    digitalWrite(ledPins[thisLed], HIGH);
    delay(wait);
  }

  for (int thisLed = (ledCount-1); thisLed >= 0; thisLed--) {
    digitalWrite(ledPins[thisLed], LOW);
    delay(wait);
  }
}

