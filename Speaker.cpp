#include "Arduino.h"
#include "Speaker.h"


 // CONSTRUCTOR(S)

Speaker::Speaker(String name , int initialValue)
{
    myName = name;
    
    myPinNumber = initialValue;

    pinMode(myPinNumber, OUTPUT );

    noTone(myPinNumber);

}



// SETTERS

void Speaker::setName(String value)
{
   myName = value;
}


void Speaker::setPinNumber(int value)
{
   myPinNumber = value;
}

void Speaker::setFrequency(int value)
{
   myFrequency = value;
    tone(myPinNumber, value );
}




// GETTERS

String Speaker::getName()
{
   return myName;
}

int Speaker::getPinNumber() 
{
   return myPinNumber;
}

int Speaker::getFrequency() 
{
   int value;
   value = myFrequency;
   return( value );
}


// METHODS

void Speaker::myMethod()
{
   //cout << "called myMethod\n";
    Serial.println("called myMethod\n");
  
}

void Speaker::freq(int value) 
{
    myFrequency = value;
    tone(myPinNumber, value );

}

void Speaker::off() 
{
 
 noTone(myPinNumber);

}

 