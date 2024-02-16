#include <iostream> 

/*
many times used with logical operators a list is below of all logicall operators

&& and
|| or
!  reverses the outcome (if true evaluates false)

*/

int main ()
{
/*
-----------------------------IF_STATMENTS-----------------------------
*/

char tf; 

std::cout << "Enter (t/f): ";
std::cin >> tf; 

if (tf == 't')
{
    std::cout << ":)" << std::endl;     //runs if condition in parentesis evaluates true
} else if (tf == 'f')
{
    std::cout << ":(" << std::endl;     //runs if first condition is false, and statment in parenthesis is true

} else
{
    std::cout << "-_-" << std::endl;    //runs if nothing else evaluates true
}

/*
----------------------------TERNARY_OPERATOR----------------------------
*/

//condition ? expression 1 : expression 2;
//replacement for an if else statment

int age; 

std::cout << "Enter your age: ";
std::cin >> age;

 age < 18 ? std::cout << "You are a minor." << std::endl : std::cout << "You are an adult.";

/*
--------------------------------SWITCHES--------------------------------
*/

int day; 

std::cout << "What day of the week is it? (1-7): " << std::endl;
std::cin >> day; 

switch(day){                                            //switch (variable) {}
    case 1:                                             //case (possible instance of variable):
        std::cout << "Its Sunday!" << std::endl;        //runs if the case evaluates true
        break;                                          //leaving switch (very common in switches)   
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
    default:                                            //if nothing evaluates true
        std::cout << "Please enter a number 1-7" << std::endl; 
        break;
}

return 0;
}