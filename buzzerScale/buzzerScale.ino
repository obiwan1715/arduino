/* plays a series of ascending then descending notes on a piezo buzzer
 I could't get this to work using this syntax
 tone(buzzer, notes[thisNote], wait);
 maybe its as simple as putting (wait) in brackets
 or maybe I never commented out the int wait
 find a way to use for to set up the notes array at the beginning
 */
 
int buzzer = 8;
const int noteCount = 10; //number of notes
int notes[] = {250, 500, 750, 1000, 1250, 1500, 1750, 2000, 2250, 2500}; //frequencies of notes

//int wait = 1000; // amount of time to wait between each note


void setup() {
    pinMode(buzzer, OUTPUT);
   }
 
void loop() {
  for (int thisNote=0; thisNote < noteCount; thisNote++) {
    tone(buzzer, notes[thisNote]);
    delay(1000);
  }
 for (int thisNote=(noteCount-1); thisNote >0; thisNote--) {
    tone(buzzer, notes[thisNote]);
    delay(1000);
  }
}
