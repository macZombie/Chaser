#include "Arduino.h"
#include "LED.h"


 // CONSTRUCTOR(S)

LED::LED(String name , int initialValue)
{
    myName = name;
    
    myPinNumber = initialValue;

    pinMode(myPinNumber, OUTPUT);
    
    digitalWrite(myPinNumber, LOW); 

}



// SETTERS

void LED::setName(String value)
{
   myName = value;
}


void LED::setPinNumber(int value)
{
   myPinNumber = value;
}



void LED::setState(int value)
{
   myState = value;

   digitalWrite(myPinNumber, myState); 
}

// GETTERS

String LED::getName()
{
   return myName;
}

int LED::getPinNumber() 
{
   return myPinNumber;
}

int LED::getState() 
{
   int value;
   value = myState;
   return( value );
}


// METHODS

void LED::myMethod()
{
   //cout << "called myMethod\n";
    Serial.println("called myMethod\n");
  
}

    void LED::on(){

      setState(1);


    }
    
    void LED::off(){

      setState(0);

    }


void LED::tell()
{
    
    int value;
    
    String name;
    int number;
    int state;
    
 
    name = getName();
    number = getPinNumber();
    state = getState();
  
    Serial.print("tell:- LED named ");
    Serial.print(name);
    Serial.print( " , pin number ");
    Serial.print( number );
    Serial.print( " is ");
    Serial.println(state);
    
}
 