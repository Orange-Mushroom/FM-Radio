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
#include <Wire.h>

AR1010 radio = AR1010(); // instance of ar1010
void setup() 
{
  // Enable I2C on the Arduino, including pull-up resistors.
  Wire.begin();
  // Initialize the serial port at a speed of 9600 baud
  Serial.begin(9600); //begins
  radio.initialise();//Initialise the AR1010 instance of radio to get the class items
  delay(1000); //1sec delay
  radio.setFrequency(910); // set it to 91.0MHz
  Serial.println(radio.frequency());   
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
  // put your main code here, to run repeatedly:

}
