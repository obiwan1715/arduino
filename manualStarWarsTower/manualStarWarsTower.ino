//star wars lego tower controlled by a potentiometer

#include <Servo.h> //include the servo library
Servo myservo;  // create servo object to control a servo
int currentIn = A0; // set A0 as pin for analog input from potentiometer

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode (currentIn,INPUT); //set this pin as input
  Serial.begin(9600);

 }

void loop() {
  int sweep = analogRead(currentIn); // take reading from potentiometer
  int turretMove = map(sweep, 0, 1023, 0, 180); //change reading to a value between 0 and 180 degrees
  myservo.write(turretMove); //move turret
  Serial.print(turretMove);
  delay(20);
}

