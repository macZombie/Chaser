
#ifndef Dummy_h
 
#define Dummy_h

#include "Arduino.h" 

 


class Dummy
{

public:
    Dummy(String name ,int value);
    
    //SETTERS
    void set(int value);
    void setName(String value);
    
    // GETTERS
    int get();
    String getName();
    
    // METHODS
    void myMethod();
    void twice();
    void tell();
    
    
    private:
    // OBJECT VARIABLES
    int myValue;
    String myName;
    
    
}; // end of class Dummy. NEVER! forget the ';' !!!!


#endif 



