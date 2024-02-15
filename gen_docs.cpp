
/*
------------------------------HEADERS------------------------------
*/

#include <iostream> //access to std:: + more!
#include <cmath>    //more math functions
#include <vector>   //


int main ()
{

/*
------------------------VARIABLE_DATA_TYPES------------------------
*/

int z;                              
//declaration 

int x = 1;                          
//integer - whole number values

double y = 1.5;                 
//doubles - numbers with decimals

char n = 'N';                   
//chars - single charectures

bool yes = true;                
//booleans - true or false

std::string hello = "Hello";    
//strings - list of chars put together, can make words


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
---------------------------PRINTING/CONSOLE--------------------------
*/

std::cout << "This is a documentation file!"; //next thing printed will be on same line
std::cout << std::endl;                       //will end the line
std::cout << hello << " World!";              //printing variables + text
std::cout << '\n';                            //next line

/*
------------------------------USER_INPUT-----------------------------
*/

int age;                                                        

std::cout << "How old are you?: ";                              //asking for input
std::cin >> age;                                                //receiveing input
std::cout << "You are " << age << " Years old!" <<std::endl;

/*
-------------------------ARITHMETIC_OPERATIONS------------------------
*/

x = x + 1; //addition
x+=1; 
x++; 

x = x - 1; //subtraction
x-=1; 
x--;

x = x * 2; //multiplication
x*=2; 

x = x / 2; //division
x/=2; 

x+=6; 
z = x % 2;  //mod (remiander of first value / second value)

/*
everything under here requires the header #include <cmath>
*/

pow(x, 4); //first value to power of second value
sqrt(x);   //square root of a value
z = abs(-x);   //absolute value of a value
z = round(y);  //round a value
z = ceil(y);   //round a value up 
z = floor(y);  //round a value down

std::max(x, (int)y);    //maximum value from 2 or more values
std::min(x, (int)y);    //minimum value from 2 or more values

//more math functions at cplusplus.com/reference/cmath

/*
-----------------------------IF_STATMENTS-----------------------------
*/

/*
many times used with logical operators a list is below of all logicall operators

&& and
|| or
!  reverses the outcome (if would be true is now false)
*/

if (true)
{
    std::cout << ":)" << std::endl;     //runs if condition in parentesis evaluates true
} else if (false)
{
    std::cout << ":(" << std::endl;     //runs if first condition is false, and statment in parenthesis is true

} else
{
    std::cout << "-_-" << std::endl;    //runs if nothing else evaluates true
}

/*
----------------------------TERNARY_OPERATOR----------------------------
*/

//condition ? expression 1 : expression 2
//replacement for an if else statment

age < 18 ? std::cout << "You are a minor" << std::endl : std::cout << "You are an adult" << std::endl; 

/*
--------------------------------SWITCHES--------------------------------
*/

int day; 

std::cout << "What day of the week is it? (1-7): " << std::endl;
std::cin >> day; 

switch(day){                                            //switch (variable) {}
    case 1:
        std::cout << "Its Sunday!" << std::endl;        //case (possible instance of variable):
        break;                                          //leaving switch
    case 2:
        std::cout << "Its Monday!" << std::endl; 
        break;
    case 3:
        std::cout << "Its Tuesday!" << std::endl;
        break;
    case 4:
        std::cout << "Its Wednesday!" << std::endl; 
        break; 
    case 5:
        std::cout << "Its Thursday!" << std::endl; 
        break;
    case 6:
        std::cout << "Its Friday!" << std::endl; 
        break;
    case 7:
        std::cout << "Its Saturday!" << std::endl; 
        break;
    default:                                           //if nothing evaluates true
        std::cout << "Please enter a number 1-7" << std::endl; 
        break;
}

return 0; //for debugging, returns 0 if program doesnt run everything its supposed to
}
