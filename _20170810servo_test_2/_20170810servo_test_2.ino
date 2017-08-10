// this works now

#include <Servo.h> // include the servo library

Servo myServo; // variable to store the servo position

int pos = 0;    // variable to store the servo position

void setup() {
myServo.attach(9); // attaches the servo on pin 9 to the servo object
}

void loop()  {  
for (pos = 0; pos <= 90; pos +=90) {
myServo.write(pos);
delay(400);
}
for (pos = 90; pos >= 0; pos -=90) {
myServo.write(pos);
delay(400);
}
}


