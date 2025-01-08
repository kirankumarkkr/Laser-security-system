const int buzzerPin =11; // Define the pin connected to the buzzer

void setup() {
  pinMode(11,OUTPUT);
  pinMode(7,INPUT);
  delay(500);
  pinMode(buzzerPin, OUTPUT); // Set the buzzer pin as an output
  // put your setup code here, to run once:

}

void loop() {
  int i=0;
  if(digitalRead(7)==HIGH)
  {
    a:
    if (conditionIsMet()) {
    // Call a function to play the tune
    playHipHopBuzzerTune();
  }
    digitalWrite(11,HIGH);
    delay(100);
    digitalWrite(11,LOW);
    delay(100);
    i++;
    if(i<1){
      goto a;
    }
  }
  // put your main code here, to run repeatedly:
  // put your main code here, to run repeatedly:

}
void playHipHopBuzzerTune() {
  int notes[] = {330, 392, 440, 392, 330, 330, 330, 294, 330, 330, 330, 440, 392, 330}; // These correspond to the notes of the melody
  int durations[] = {400, 200, 200, 200, 400, 200, 200, 400, 400, 200, 400, 400, 400, 400};
  
  for (int i = 0; i < sizeof(notes)/sizeof(notes[0]); i++) {
    digitalWrite(11,HIGH);
    delay(i);
    digitalWrite(11,LOW);
    tone(buzzerPin, notes[i]); // Play the note
    delay(durations[i]); // Wait for the note duration
    noTone(buzzerPin); // Stop the tone
    delay(50); // Add a small delay between notes for better sound quality
  }
}

bool conditionIsMet() {
  // Define your condition here
  // For example, you could read a sensor value or check if a certain event occurred
  // Replace this with your actual condition
  return true; // Placeholder condition, replace with your actual condition
}