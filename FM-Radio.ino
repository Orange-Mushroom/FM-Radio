/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 * source https://github.com/adamjansch/AR1010lib
 ******************************************************************************
 */
#include "ar1010lib.h"
#include <Wire.h> //i2c protocol communicate wit radio module
const int buttonPin = 3;

AR1010 radio = AR1010(); // instance of ar1010
/*void setup() 
{
  // Enable I2C on the Arduino, including pull-up resistors.
  Wire.begin();
  // Initialize the serial port at a speed of 9600 baud
  Serial.begin(9600); //begins
  Serial.println("Toms radio"); 
  radio.initialise();//Initialise the AR1010 instance of radio to get the class items
  delay(1000); //1sec delay
  radio.setFrequency(910); // set it to 91.0MHz
  radio.setVolume(1);
  delay(1000);
  pinMode(buttonPin, INPUT); //sets digital pin 3 as input
  Serial.println(radio.frequency());   
  
} */
double frequencyFM = 910;
void setup() {
 Wire.begin();
 Serial.begin(9600);
 Serial.println("AR1010 - 2017 Demo");
 radio.initialise();
 radio.setVolume(5);
 radio.setFrequency(frequencyFM);
}

void volumeUP()
{
  
}
void volumeDown()
{
  
}
void frequencyUP()
{
  
}
void frequencyDown()
{
  
}
void loop() {
 Serial.print("Playing: ");
 Serial.println(radio.frequency());
 delay(60*1000);
}

/*void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin)==HIGH) //if digital pin on, current run through
  {
    radio.seek();
    delay(500); 
    Serial.println(radio.frequency());  
  }
   Serial.println(digitalRead(buttonPin));  
   delay(1000);

}*/
