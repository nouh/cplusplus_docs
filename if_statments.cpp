#include <iostream> 

/*
many times used with logical operators a list is below of all logicall operators

&&; and
||; or
! ; not
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



return 0;
}