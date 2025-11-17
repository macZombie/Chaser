#include "Arduino.h"
#include "Dummy.h"


 // CONSTRUCTOR(S)

Dummy::Dummy(String name , int initialValue)
{
    myValue = initialValue;

    myName = name;
}



// SETTERS

void Dummy::set(int value)
{
   myValue = value;
}


void Dummy::setName(String value)
{
   myName = value;
}



// GETTERS

int Dummy::get() 
{
   return myValue;
}


String Dummy::getName()
{
   return myName;
}



// METHODS

void Dummy::myMethod()
{
   //cout << "called myMethod\n";
    Serial.println("called myMethod\n");
  
}


void Dummy::twice()
{
    int p;
    p = get();
    p = p * 2;
    set(p);
}


void Dummy::tell()
{
    
    int value;
    
    String name;
    
    value = get();
    
    name = getName();
  
    Serial.print("tell:- ");
    Serial.print(name);
    Serial.print( " is ");
    Serial.println( value );
    
}
 