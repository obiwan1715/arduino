/*night light
 * uses if/else loop
 * reads input from photo cell
 * if falls below a certain level, turns on a led
 * use bits of old maglite to house the led and miinimise light falling back on the photo cell
 * ... hopefully this will stop it going into a feedback loop 
 * UNTESTED
 */

const int sensorPin = A0 ; // read input from photo cell on A0
const int bulb = 9; // LED connect to pin 9
int light = 0;  // set initial record value of photocell input
int dark = 100; // this will be the cut off point -- below this counts as dark and the light comes on -- ABRITRARY NUMBER ATM


void setup() {

// Serial.begin(9600); // use this to print to serial port for calibration if needed
pinMode(sensorPin, INPUT);
pinMode(bulb, OUTPUT);

}

void loop() {
  
light = analogRead(sensorPin);

  if (light < dark) {
    digitalWrite(bulb,HIGH);
    }
  else {
    digitalWrite(bulb,LOW);
    }

}
