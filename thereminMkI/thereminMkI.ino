/* theremin which varies the pitch of a piezo buzzer according the light hitting a photo resistor
 *  calibrates the photoresistor first then maps between those min/max values 
 *  ledPin lights up at the end of the 5-second calibration period, theremin is then live
 *  press reset button to recalibrate
 */

// constants
const int sensorPin = A0;    // pin that the sensor is attached to
const int soundOut = 9;      // sets pin 9 for output to buzzer

// variables
int sensorValue = 0;         // initial value for the sensor value
int sensorMin = 1023;        // initial value for the minimum sensor value
int sensorMax = 0;           // initial value for the maximum sensor value
int octave = 4000;           // change this value according to how high-pitched you want it to be

void setup() {  
  
  pinMode (soundOut,OUTPUT); //set this pin as output
     
  while (millis() < 5000) {  // calibrate during the first five seconds
  sensorValue = analogRead(sensorPin); // start reading from A0

    if (sensorValue > sensorMax) {
      sensorMax = sensorValue;     // record the maximum sensor value
    }

    if (sensorValue < sensorMin) {     // record the minimum sensor value
      sensorMin = sensorValue;
    }
  }
}

void loop() {

 sensorValue = analogRead(sensorPin); // start reading from A0 again
 
 int pitch = map(sensorValue, sensorMin, sensorMax, 50, octave); //change reading from A0 to a value between 0 (silent) and the octave setting defined earlier
 
 tone(soundOut,pitch,20); //send tone to pin 9, play pitch, duration 20 (can change duration to change sound effect)
 
 delay(10); //pause 10ms then start again
 
}
