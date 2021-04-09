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
#include <LiquidCrystal_I2C.h>

const int buttonFreqUP = 3; //pin

AR1010 radio = AR1010(); // instance of ar1010
LiquidCrystal_I2C lcd(0x27, 16, 2); // Set the LCD address to 0x27 for a 16 chars and 2 line display

/*void setup() 
{
  // Enable I2C on the Arduino, including pull-up resistors.
  Wire.begin();
  Serial.begin(9600); // Initialize the serial port at a speed of 9600 baud
  Serial.println("Toms radio"); 
  radio.initialise();//Initialise the AR1010 instance of radio to get the class items
  delay(1000); //1sec delay
  radio.setFrequency(910); // set it to 91.0MHz
  radio.setVolume(2);
  delay(1000);
  pinMode(buttonPin, INPUT); //sets digital pin 3 as input
  Serial.println(radio.frequency());   
  
}
void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin)==LOW) //if digital pin on, current run through
  {
    radio.seek();
    delay(500); 
    Serial.println(radio.frequency());  
  }
   Serial.println(digitalRead(buttonPin));  
   delay(1000);

} */

double frequencyFM = 1009;//910 100.9
int VolumeFM = 5;

void setup()
{
  lcd.begin(); // initialize the LCD
  lcd.backlight();
  
  lcd.setCursor(0,0);
  lcd.print("Frequency:");
  lcd.print(frequencyFM);

  lcd.setCursor(0,1);
  lcd.print("Volume:");
  lcd.print(VolumeFM);
 
 
  Wire.begin();
  Serial.begin(9600);
  Serial.println("Toms radio");
  radio.initialise();
  radio.setVolume(VolumeFM);
  radio.setFrequency(frequencyFM);
  
  delay(1000);
  pinMode(buttonFreqUP, INPUT); //sets digital pin 3 as input
  Serial.println(radio.frequency());   
}

void loop() {  
  if(digitalRead(buttonFreqUP)==LOW) //if digital pin on, current run through
  {
    radio.seek(u);
    delay(500); 
    Serial.println(radio.frequency());  
  }
   //Serial.println(digitalRead(buttonFreqUP));  
   delay(300);
 /*Serial.print("Playing: ");
 Serial.println(radio.frequency());
 delay(60*1000); */
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
