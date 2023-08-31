//
//                        lab_2_ino.ino
//
//
//
//  By: Lydia Easter
//  Date: 31 August 2023
//  Class: ECE-1002-002
//  Assignment: Lab 2
//
//  Problem Statement: When there isn't very much light going through the sensor, it turns the LED on.
//    When there is light going through the sensor, it turns the LED off.
//

void setup()
{
  pinMode(6, OUTPUT); // initializing pin 8 as output
  pinMode(9, INPUT); // initializing pin 7 as input
}
void loop()
{
  if (digitalRead(9) == LOW)
  {
    digitalWrite(6, HIGH); // send power to pin 8 if there is no light on LED
  }
  else
  {
    digitalWrite(6, LOW); // turn off power to pin 8 if there is light on LED
  }
}
