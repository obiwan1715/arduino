//this version of led bar graph only uses three leds

//this one works fine

//do not use resistors on LEDs with thislED >= 5 


const int analogPin = A0; // pin connects to potentiometer
const int ledCount = 9; //number of LEDs
int ledPins[] = {2,3,4,5,6,8,9,10,11}; //pins connected to LEDs


void setup() {
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT); // set the LED pins as output
    }
   }
 
void loop() {
  int sensorReading = analogRead(analogPin); //analog input from potentiometer
  int ledLevel = map(sensorReading, 0, 1023, 0, ledCount); //takes sensor reading in a analog range from 0 to 1023, and maps it into a new range between 0 and ledCount
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    if (thisLed < ledLevel) { //turn on LEDs in sequence
      digitalWrite(ledPins[thisLed], HIGH);
    }
    else { //turn off LEDs in sequence
      digitalWrite(ledPins[thisLed], LOW);
    }
  }

}
