//
//                        lab_3_speakers.ino
//
//  By: Lydia Easter
//  Date: 31 August 2023
//  Class: ECE-2001-002
//  Assignment: Playing songs with buttons
//
//  Problem Statement: Playing music with four buttons.



void setup()
{
  // initialize pin 9 as an output for the speaker
  pinMode(9, OUTPUT);   

  //initialize pins 4, 5, 6, 7 as button inputs with internal pullup resistors
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
}

void loop ()
{
  // play RE5
  if (digitalRead(4) == LOW && digitalRead(5) == LOW && digitalRead(6) == LOW && digitalRead(7) == LOW)
  {
    tone(9, 587, 250);
  }
  // play DO5
  else if (digitalRead(5) == LOW && digitalRead(6) == LOW && digitalRead(7) == LOW)
  {
    tone(9, 523, 250);
  }
  // SI4
  else if (digitalRead(4) == LOW && digitalRead(5) == LOW && digitalRead(7) == LOW)
  {
    tone(9, 494, 250);
  }
  // LA4
  else if (digitalRead(4) == LOW && digitalRead(5) == LOW && digitalRead(6) == LOW)
  {
    tone(9, 440, 250);
  }
  // SOL4
  else if (digitalRead(6) == LOW && digitalRead(7) == LOW)
  {
    tone(9, 392, 250);
  }
  // FA4
  else if (digitalRead(5) == LOW && digitalRead(7) == LOW)
  {
    tone(9, 350, 250);
  }
  // MI4
  else if (digitalRead(5) == LOW && digitalRead(6) == LOW)
  {
    tone(9, 330, 250);
  }
  // RE4
  else if (digitalRead(4) == LOW && digitalRead(7) == LOW)
  {
    tone(9, 294, 250);
  }
  // DO4
  else if (digitalRead(4) == LOW && digitalRead(6) == LOW)
  {
    tone(9, 262, 250);
  }
  // SI3
  else if (digitalRead(4) == LOW && digitalRead(5) == LOW)
  {
    tone(9, 247, 250);
  }
  // LA3
  else if (digitalRead(7) == LOW)
  {
    tone(9, 220, 250);
  }
  // SOL3
  else if (digitalRead(6) == LOW)
  {
    tone(9, 196, 250);
  }
  // FA3
  else if (digitalRead(5) == LOW)
  {
    tone(9, 175, 250);
  }
  // MI3
  else if (digitalRead(4) == LOW)
  {
    tone(9, 165, 250);
  }
  else
  {
    noTone(9);
  }
}
