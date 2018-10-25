/* variant using sonar.ping_median to make the results more stable
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
  sonar.ping_median(5);
  distance =  sonar.convert_cm(sonar.ping_median(5));
  Serial.print("Ping: ");
  Serial.print(distance);
  Serial.println("cm");
  if (distance > 0) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
    
  }
