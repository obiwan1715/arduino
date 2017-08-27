/* calibrates max and min from a photoresistor and prints them to serial monitor
 *  set the initial max as 0 and the insitial min as 1023 so they are definitely adjusted
 *  ledPin lights up at the end of the 5-second calibration period
 *  all the calibrating happens in setup so that you don't get an endlessly scrolling readout
 *  press reset button to get next set of readings
 */

// constants
const int sensorPin = A0;    // pin that the sensor is attached to
const int ledPin = 13; // attach this led directly to board via pin 13 and GND

// variables
int sensorValue = 0;         // the sensor value
int sensorMin = 1023;        // minimum sensor value
int sensorMax = 0;           // maximum sensor value


void setup() {  
  
    Serial.begin(9600); // open serial comms
     
    while (millis() < 5000) {  // calibrate during the first five seconds
    sensorValue = analogRead(sensorPin); // start reading from A0

    if (sensorValue > sensorMax) {
      sensorMax = sensorValue;     // record the maximum sensor value
    }

    if (sensorValue < sensorMin) {     // record the minimum sensor value
      sensorMin = sensorValue;
    }
  }
  
  Serial.println(sensorMax); // print the maximum reading
  Serial.println(sensorMin); // print the minimim reading
}

void loop() {
 digitalWrite(ledPin, HIGH); // light the LED to show calibration is over
}
