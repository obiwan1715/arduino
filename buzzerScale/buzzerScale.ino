/* plays a series of ascending then descending notes on a piezo buzzer
 I could't get this to work using this syntax
 tone(buzzer, notes[thisNote], wait);
 doesn't work with wait as an int or as a unsigned long - in each case it just produces a series of faint clicks as if its only playing each note for 1ms
 find a way to use 'for' to set up the notes array at the beginning
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
    noTone(buzzer);
    delay(1000);
  }
 for (int thisNote=(noteCount-1); thisNote >0; thisNote--) {
    tone(buzzer, notes[thisNote]);
    delay(1000);
    noTone(buzzer);
    delay(1000);
  }
}
