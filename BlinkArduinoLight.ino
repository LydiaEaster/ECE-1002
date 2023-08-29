//
//                   lab_1_blinkie.ino
//
//    By: Lydia Easter
//    Date: 29 August 2023
//    Class: ECE-1002/002
//    Assignment: Lab-1 blink lights
//
//    Problem Statement: Connect an LED to pin 13 and blink on-off every 1/2 second.
//
//             ^^^^^^  Algorithm   ^^^^^^
// int oneSecDelay = 1000;
// int twoSecDelay = 2000;
//
// set function
//   set pin 13 as output
//   initializee pin 13 as off
// end setup function
//
// loop function
//   turn on LED
//   tell processor sleep one second
//
//   turn off LED
//   sleep 2 sec
// end loop function
//

const int oneSecDelay = 1000;  // global const
const int twoSecDelay = 2000;
const int pinNumber = 13;


void setup() 
{
  pinMode(pinNumber, OUTPUT);   // initialize pin pinNumber as digital output to control the LED
  digitalWrite(pinNumber, LOW);   // initialize to OFF
} // end setup

void loop() 
{
 // use delays and pin 8 to blink an LED on and off
 digitalWrite(pinNumber, HIGH); 
 delay(oneSecDelay); // sleep one second

 digitalWrite(pinNumber, LOW);
 delay(twoSecDelay); // sleep two seconds

} // end loop
