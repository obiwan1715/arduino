/* this works
 *  returns cm vales depending on distance from object
 *  could use this for basic obstacle sensing robot
 *  if so set max distance to be the distance you want the bot to start reacting
 *  test with led first then include motors
 */

#include <NewPing.h>
 
#define TRIGGER_PIN  12
#define ECHO_PIN     11
#define MAX_DISTANCE 200
 
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
 
void setup() {
  Serial.begin(115200);
}
 
void loop() {
  delay(50);
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm());
  Serial.println("cm");
}
