//star wars lego tower sweeps through a 90 degree arc searching for rebels on the ice planet Hoth

#include <Servo.h> //include the servo library

Servo myservo;  // create servo object to control a servo

int pos = 90;    // variable to store the servo position at roght angles to servo body
int creep = 200; // adjust this var to change the speed of sweep

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
}

void loop() {
  for (pos = 90; pos <= 135; pos ++) {  // goes from 90 degrees to 135 degrees in steps of 1 degree
    myservo.write(pos);                 // tell servo to go to position in variable 'pos'
    Serial.print(pos);                  // print pos in degrees to terminal
    delay(creep);                       // wait before advancing
  }
  for (pos = 135; pos >= 45; pos --) {  // goes from 135 degrees to 45 degrees
    myservo.write(pos);
    Serial.print(pos);
    delay(creep);
  }
  for (pos = 45; pos <= 90; pos++) {    // goes from 45 back to 90
    myservo.write(pos);
    Serial.print(pos);
    delay(creep);    
  }
}

