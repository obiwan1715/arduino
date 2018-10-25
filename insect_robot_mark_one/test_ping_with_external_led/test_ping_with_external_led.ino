/* this works with external LED on ledPin
 *  triggers at MAX_DISTANCE or closer
 */

#include <NewPing.h>
 
#define TRIGGER_PIN  12
#define ECHO_PIN     11
#define MAX_DISTANCE 15
const int ledPin = 7;
int distance = 0;
 
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 
void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
}
 
void loop() {
  delay(50);
  distance = sonar.ping_cm();
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm());
  Serial.println("cm");
  if (distance > 0) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
    
  }
