// led traffic lights written from scratch

// set variables

const int red = 13;
const int amber = 12;
const int green = 8;
const int button = 2;
int buttonState = 0;

void setup() { 
  pinMode (red, OUTPUT);
  pinMode (amber, OUTPUT);
  pinMode (green, OUTPUT);
  pinMode (button, INPUT);

}

void loop() {
 
// make sure only one led on at any one time

digitalWrite(red, HIGH); 
  digitalWrite(amber,  !digitalRead(red));
  digitalWrite(green,  !digitalRead(red));
  
  
digitalWrite(amber, HIGH); 
  digitalWrite(red,  !digitalRead(red));
  digitalWrite(green,  !digitalRead(red));
  

digitalWrite(green, HIGH); 
  digitalWrite(amber,  !digitalRead(red));
  digitalWrite(red,  !digitalRead(red));
  


}
