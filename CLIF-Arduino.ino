#include <SoftwareSerial.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2); // set the LCD address to 0x20 for a 16 chars and 2 line display
SoftwareSerial HC06(3, 2); //HC06-TX Pin 3, HC06-RX to Arduino Pin 2

//int LED = 12; //Use whatever pins you want 
//int LDR = A0; //Sensor Pin to Analog A0

String input;
char val;
int ledpin = 8;

void setup() {
  pinMode(ledpin, OUTPUT);
  //initialize lcd screen
  lcd.init();
  // turn on the backlight
  lcd.backlight();
 // HC06.begin(9600); //Baudrate 9600 , Choose your own baudrate 
  Serial.begin(9600);
 // pinMode(LED, OUTPUT);
  //pinMode(LDR, INPUT);
}


void loop() {
  lcd.setCursor(0,0);
 // lcd.clear();
  
  while(Serial.available()>0){
    input = Serial.readStringUntil('\n');
    lcd.print(input);
    Serial.print(input);
    //digitalWrite(8, HIGH);



  }

  
}