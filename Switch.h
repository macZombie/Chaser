#ifndef Switch_h
 
#define Switch_h

#include "Arduino.h" 
 


class Switch
{

public:
    Switch(String name ,int pinNumber);
    
    //SETTERS
    void setName(String value);
    void setPinNumber(int value);
    
    
    
    // GETTERS
    String getName();
    int getPinNumber();
    int getState();
    
    // METHODS
    void myMethod();
    int poll();
    void tell();
    
    
    private:
    // OBJECT VARIABLES

    String myName;
    int myPinNumber;
    int myState;
    
    
}; // end of class Switch. NEVER! forget the ';' !!!!


#endif 



