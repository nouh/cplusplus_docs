#include <iostream>

int main()
{
    int x = 1;                          
    //integer; whole number values

    double y = 1.5;                 
    //doubles; numbers with decimals

    char n = 'N';                   
    //chars; single charectures

    bool yes = true;                
    //booleans; true or false

    std::string hello = "Hello";    
    //strings; list of chars put together, can make words

    int z;                              
    //declaration 

    z = 7;
    //assignment

    /*
    Local variables
    a varaibale declaired locally, only anything in its same set of curly braces can see it

    Global variables
    Varaibles declaired outside any  function, any function can see and use these
    - to use a global variable use the scope reseluton operator before the varibale (ex. ::num)
    - best to avoid when possible as it polutes the global namespace and they are less secure
    */

/*
--------------------------TYPE_CONVERSIONS---------------------------
*/

    char d = 100; 
    //implicit, program does this by itself

    d = x + (int)y; 
    //explicit, sepcified conversion before value

}

