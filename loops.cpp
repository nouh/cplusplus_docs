#include <iostream>

/*
-------------------------------WHILE_LOOPS------------------------------
*/

int main()
{

std::string name; 
int year; 

while (name.empty())                            //does something until a condition is met
{
    std::cout << "Enter your name: "; 
    std::cin >> name;                               
}

do                                              //execute a statment first then check if it is true
{                                               //same as while loop, just executes the statment one time 
    std::cout << "Enter the year: ";            //before checking the conditional, no matter what 
    std::cin >> year; 
} while (year < 2024); 

/*
--------------------------------FOR_LOOPS-------------------------------
*/

for(int i = 1; i <= 3; i++)                     //runs code in loop a specified amount of times
{                                               //(initalize variable; conditional; increase value)
    std::cout << "I LOVE C++" << std::endl; 
    continue;                                   //skips one interation of the loop (neich use cases)
}                                               //loops also count as their own name spaces

/*
------------------------------NESTED_LOOPS------------------------------
*/

for (int i = 1; i < 4; i++)                     //will loop 3 times
{
    for(int j = 1; j < 5; j++)                  //will loop 4 times
    {
        std::cout << "*";                       //nested loop will 12 times total
    }
    std::cout << '\n';
}

/*
--------------------------------FOR_EACH--------------------------------
*/
    //less syntax than normal for loops, but much less flexible
    //must iterate through each elemnt of the traversable data type

    int nums[] = {1, 2, 3, 4, 5, 6};

    for (int num : nums)
    {
        std::cout << num << '\n'; 
    }

return 0;
}

