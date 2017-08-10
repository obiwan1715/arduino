// this works now

#include <Servo.h> // include the servo library

Servo myServo; // variable to store the servo position



void setup() {
myServo.attach(9); // attaches the servo on pin 9 to the servo object
}

void loop()  {  
myServo.write(0);
delay(600);
myServo.write(180);
delay(600);
}


