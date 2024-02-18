#include <iostream>

int main()
{
/*
-------------------------ARITHMETIC_OPERATIONS------------------------
*/
    int x = 1;
    double y = 1.5;
    int z = 0;

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
}