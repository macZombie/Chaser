#include "Arduino.h"
#include "Switch.h"


 // CONSTRUCTOR(S)

Switch::Switch(String name , int initialValue)
{
    myName = name;
    
    myPinNumber = initialValue;

    pinMode(myPinNumber, INPUT);

    myState = ! digitalRead(myPinNumber);
    
   

}



// SETTERS

void Switch::setName(String value)
{
   myName = value;
}


void Switch::setPinNumber(int value)
{
   myPinNumber = value;
}





// GETTERS

String Switch::getName()
{
   return myName;
}

int Switch::getPinNumber() 
{
   return myPinNumber;
}

int Switch::getState() 
{
   int value;
   myState = ! digitalRead(myPinNumber);
   value = myState;
   return( value );
}


// METHODS

void Switch::myMethod()
{
   //cout << "called myMethod\n";
    Serial.println("called myMethod\n");
  
}

int Switch::poll() 
{
   int value;
   myState = ! digitalRead(myPinNumber);
   value = myState;
   return( value );
}


void Switch::tell()
{
    
    int value;
    
    String name;
    int number;
    int state;
    
 
    name = getName();
    number = getPinNumber();
    state = getState();
  
    Serial.print("tell:- Switch named ");
    Serial.print(name);
    Serial.print( " , pin number ");
    Serial.print( number );
    Serial.print( " is ");
    Serial.println(state);
    
}
 