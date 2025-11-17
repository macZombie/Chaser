// Adapted from Project 4 - blue LED added and sequence changed

#include "./Dummy.h"
#include "./LED.h"
#include "./Switch.h"
#include "./Speaker.h"

#include <Wire.h>
#include <LiquidCrystal_I2C.h>



// merged software-only demo with ESP Project 4
// worked through bugs...
// works on ESP32
// migrated to Mega... seems okay
//
//


int count = 0;


void setup() {

  Serial.begin(115200);
  Serial.println("Start of Chaser Demo");


  String name = "";

  int x = 0;

  Dummy dummy("dummy",count);

  dummy.set(x);


  x = dummy.get();

  name = dummy.getName();


  Serial.print(name);
  Serial.print( " is ");
  Serial.println( x );


// These are the ESP32 LED connections
  LED greenLED("greenLED",27);
  LED yellowLED("yellowLED",26);
  LED redLED("redLED",25);   
  LED blueLED("blueLED",33);


  Switch redButton("redButton",18);
  Switch yellowButton("yellowButton",16);
  Switch greenButton("greenButton",17);
  Switch blueButton("blueButton",5);


  Speaker speaker("speaker",15);



  LiquidCrystal_I2C display(0x27,16,2); // set the LCD address to 0x27 for a 16 chars and 2 line display
  display.init();
  //display.autoscroll();




  while ( true ){

    if ( redButton.poll() == 1 ){
      redLED.on();
      //display.setCursor(0,0);
      display.print("redButton");
      speaker.freq(100);
    } else {
      redLED.off();
    }

    if ( yellowButton.poll() == 1 ){
      yellowLED.on();
      //display.setCursor(0,0);
      display.print("yellowButton");
      speaker.freq(200);
    } else {
      yellowLED.off();
    }

    if ( greenButton.poll() == 1 ){
      greenLED.on();
      //display.setCursor(0,0);
      display.print("greenButton");
      speaker.freq(300);
    } else {
      greenLED.off();
    }

    if ( blueButton.poll() == 1 ){
      blueLED.on();
      //display.setCursor(0,0);
      display.print("blueButton");
      speaker.freq(400);
    } else {
      blueLED.off();
    }

    //redButton.tell();
    //yellowButton.tell();    

    delay(100);

    speaker.off();

    delay(500);

    //display.setCursor(0,0);
    //display.print("                         ");
    display.clear();


    



  } // while loop



}

void loop() {

  // Avoid the void loop() .....causes out-of-scope things to happen
  
}