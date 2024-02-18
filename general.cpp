
/*
------------------------------HEADERS------------------------------
*/

#include <iostream> //access to std:: + more!
#include <cmath>    //more math functions
#include <vector>   //idrk what this does tbh
#include <ctime>    //random numbers
#include <iomanip>  //precision for floating point numbers

int main ()         //main method
{

/*
-----------------------VARIABLES+DATA_TYPES------------------------
*/

    int z;                              
    //declaration 

    z = 7;
    //assignment

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

    /*
    Local variables
    a varaibale declaired locally, only anything in its same set of curly braces can see it

    Global variables
    Varaibles declaired outside any  function, any function can see and use these
    - to use a global variable use the scope reseluton operator before the varibale (ex. ::num)
    - best to avoid when possible as it polutes the global namespace and they are less secure
    */

/*
---------------------------PRINTING2CONSOLE--------------------------
*/

    std::cout << "This is a documentation file!"; //next thing printed will be on same line
    std::cout << std::endl;                       //will end the line
    std::cout << hello << " World!";              //printing variables + text
    std::cout << '\n';                            //next line

/*
--------------------------USER_INPUT(CONSOLE)------------------------
*/

    int age;     
    std::string height;                                                    

    std::cout << "How old are you?: ";                              //asking for input
    std::cin >> age;                                                //receiveing input
    std::cout << "How tall are you?: "; 
    std::cin >> height; 
    //std::getline(std::cin, height);                               asking for two inputs back to back

    std::cout << "You are " << age << " years old and " << height << " feet tall!" << std::endl;    

    std::cin.clear();               //will reset any error flags when std::cin fails to interperet the input
    fflush(stdin);                  //will clear the input buffer

/*
-------------------------ARITHMETIC_OPERATIONS------------------------
*/

    x = x + 1;  //addition
    x+=1; 
    x++; 

    x = x - 1;  //subtraction
    x-=1; 
    x--;

    x = x * 2;  //multiplication
    x*=2; 

    x = x / 2;  //division
    x/=2; 

    x+=6; 
    z = x % 2;  //mod (remiander of first value / second value)

    /*
    under here requires the header #include <cmath> ---------------------
    */

    pow(x, 4);              //first value to power of second value
    sqrt(x);                //square root of a value
    z = abs(-x);            //absolute value of a value
    z = round(y);           //round a value
    z = ceil(y);            //round a value up 
    z = floor(y);           //round a value down

    std::max(x, (int)y);    //maximum value from 2 or more values
    std::min(x, (int)y);    //minimum value from 2 or more values

    /*
    under here requires the header #include <ctime> ---------------------
    */

    //pseudo random, not fully random (but very close)

    srand(time(NULL));      //initialize random number generator srand(seed(NULL));
    //                        uses the current time as a seed for random numbers

    z = rand();             //generates a random number between 0-3231
    z = rand() % 6;         //generates a random number between 0-5
    z = (rand() % 6) +1;    //generates a random number between 1-6

    //more math functions at cplusplus.com/reference/cmath



/*
--------------------------TYPE_CONVERSIONS---------------------------
*/

    char d = 100; 
    //implicit, program does this by itself

    d = x + (int)y; 
    //explicit, sepcified conversion before value

/*
--------------------------------CONST--------------------------------
*/

    const std::string NAME = "Noah";            //these variables cannot be changed
    const std::string LAST_NAME = "Gonzalez";   //standard naming - all caps

    //make sure to use them whenver possible! 

/*
-------------------------------SIZE_OF--------------------------------
*/

    /*
    sizeof() will return the size (in bytes) of whatever is passed into it
    */

    std::cout << sizeof(int) << std::endl;          //int; will always be 4 bytes large
    std::cout << sizeof(double) << std::endl;       //double; will always be 8 bytes large
    std::cout << sizeof(char) << std::endl;         //char; will always be 1 bytes large
    std::cout << sizeof(bool) << std::endl;         //bool; will always be 8 bytes large
    std::cout << sizeof(std::string) << std::endl;  //string; will always be 8 bytes large

    //can be used to calculate how many elements are in an array
    //sizeof(array)/sizeof(arrays data type)

return 0;
}
