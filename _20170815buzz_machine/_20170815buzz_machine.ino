// turn a potentiometer to change the tone of the sound coming from a piezo buzzer

int currentIn = A0; // set A0 as pin for analog input from potentiometer
int soundOut = 9; // sets pin 9 for output to buzzer

void setup() {
pinMode (currentIn,INPUT); //set this pin as input
pinMode (soundOut,OUTPUT); //set this pin as output
}

void loop() {
  int noise = analogRead(currentIn); // take reading from potentiometer
  int pitch = map(noise, 0, 1023, 0, 4000); //change reading to a value between 0 (silent) and 400
  tone(soundOut,pitch,20); //send tone to pin 9, play pitch, duration 20
  delay(10); //pause 10ms then start again
}
