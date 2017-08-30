/*
 * basic test for keyestudio photo cell
 * low light = low 'value'
 * includes sound
 * sound would be better with a map function
 * calibrate seems to make the values very extreme - see thereminMkI
 */

int sensorPin = A0 ;
int value = 0;
const int soundOut = 9;

void setup() {
Serial.begin(9600);
}

void loop() {
value = analogRead(sensorPin);
tone(soundOut,value,20); //send tone to pin 9, play pitch, duration 20 (can change duration to change sound effect)
Serial.println(value, DEC);
delay(50);
}
