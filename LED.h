
#ifndef LED_h
 
#define LED_h

#include "Arduino.h" 
 


class LED
{

public:
    LED(String name ,int pinNumber);
    
    //SETTERS
    void setName(String value);
    void setPinNumber(int value);
    void setState(int value);
    
    
    // GETTERS
    String getName();
    int getPinNumber();
    int getState();
    
    // METHODS
    void myMethod();
    void on();
    void off();
    void tell();
    
    
    private:
    // OBJECT VARIABLES

    String myName;
    int myPinNumber;
    int myState;
    
    
}; // end of class LED. NEVER! forget the ';' !!!!


#endif 



