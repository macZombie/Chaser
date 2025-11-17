#ifndef Speaker_h
 
#define Speaker_h

#include "Arduino.h" 
 


class Speaker
{

public:
    Speaker(String name ,int pinNumber);
    
    //SETTERS
    void setName(String value);
    void setPinNumber(int value);
    void setFrequency(int value);
    
    
    
    // GETTERS
    String getName();
    int getPinNumber();
    int getFrequency();
    


    // METHODS
    void myMethod();
    void tell();
    void freq(int value);
    void off();
    
    
    
    private:
    // OBJECT VARIABLES

    String myName;
    int myPinNumber;
    int myFrequency;
    
    
}; // end of class Speaker. NEVER! forget the ';' !!!!


#endif 



