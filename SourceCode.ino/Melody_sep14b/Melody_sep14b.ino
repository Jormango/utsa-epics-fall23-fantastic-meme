// Define pin, speed, and # of repetitions
const int buzzerPin = 8; 
const float songSpeed = 0.85;
int repetitions = 2; 

// Define note frequencies
#define NOTE_B4 493
#define NOTE_A4 440
#define NOTE_E5 659
#define NOTE_A5 466
#define NOTE_G5 415
#define NOTE_G4 390
#define NOTE_E4 330
#define NOTE_D4 294
#define NOTE_D5 587

// Defines the melody using an array
int melody[] = {
0, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4,0,NOTE_E4,NOTE_D4,NOTE_E4,NOTE_G4,0,NOTE_A4,NOTE_A4,NOTE_B4,NOTE_A4,NOTE_E4,NOTE_E4,NOTE_E4,NOTE_D4,NOTE_E4,NOTE_G4,
0, NOTE_D4, NOTE_D4,NOTE_E4,NOTE_D4,NOTE_E4,NOTE_G4,NOTE_G4,NOTE_D5,NOTE_D5,NOTE_A4,NOTE_A4,NOTE_A4,NOTE_A4,NOTE_B4,NOTE_A4,NOTE_E4,NOTE_G4,NOTE_G4,NOTE_A4,NOTE_G4

0, NOTE_
};

// Define the durations for each note in ms, must match with melody array 1:1
int durations[] = {
500,250,250,250,666,500,250,250,250,666,500,250,250,250,500,250,250,250,250,250,666,
500,250,250,250,666,250,250,250,250,1000,250,250,250,250,250,666,250,250,250,250,500,
 
};


void setup() {
  pinMode(buzzerPin, OUTPUT);


for (int repeat = 0; repeat < repetitions; repeat++) { //value repeat starts at 0, will increase until it matches # of repetitions
  for (int i = 0; i < sizeof(melody) / sizeof(int); i++) { //i represents # of notes, which will continue to play until the last one
    int noteDuration = durations[i] / songSpeed; 
    if (melody[i] != 0) { //If melody is anything but 0
      tone(buzzerPin, melody[i], noteDuration);//Run the note with matching freq. to the buzzer for givin duration
    } else { //If it is 0, play no tone for given duration
      noTone(buzzerPin);
    }
    delay(noteDuration);
  }
  }

}

void loop() {


  }


