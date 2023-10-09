// Define buzzer pin and tempo
const int buzzerPin = 8;  // Replace with the pin connected to your passive buzzer
const float songSpeed = 0.85;

// Define note frequencies
#define NOTE_B4 493
#define NOTE_A4 440
#define NOTE_E5 659
#define NOTE_A5 466
#define NOTE_G5 415
#define NOTE_G4 390
#define NOTE_E4 330

// Define the melody as an array of notes
int melody[] = {
  NOTE_B4, 0, NOTE_E5, 0, NOTE_B4, 0, NOTE_E5, 0,
  NOTE_B4, NOTE_E5, NOTE_B4, 0, NOTE_A5, NOTE_B4, 0,
  NOTE_B4, NOTE_A5, NOTE_B4, NOTE_A4, 0, NOTE_G5, NOTE_A4, NOTE_G4,
  NOTE_E4, 0,
  // Continue with the rest of the notes
};

// Define the durations for each note (in milliseconds)
int durations[] = {
  125, 125, 125, 125, 125, 125, 125, 125,
  125, 250, 125, 125, 125, 125, 125,
  125, 125, 125, 125, 125, 125, 125, 400,
  500, 125,
  // Continue with the rest of the durations
};

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < sizeof(melody) / sizeof(int); i++) {
    int noteDuration = durations[i] / songSpeed;
    if (melody[i] != 0) {
      tone(buzzerPin, melody[i], noteDuration);
    } else {
      noTone(buzzerPin);
    }
    delay(noteDuration);
  }
}
