#include <iostream> 

void name();                                        //declair functions before calling
void name(std::string first, std::string last);     //declair functions before calling

int main()                      
{
    std::string first = "Noah"; 
    std::string last = "Gonzalez"; 

    name();                 //functions can have the same name with different number of arguments
    name(first);            //this is called the function signature
    name(first, last);      //the number of arguments you pass determins the function called
}

void name()                 //no arguments will call this function
{
    std::cout << "You dont have a name!" << std::endl;
}

void name(std::string first)                            //one argument will call this function
{
    std::cout << first << std::endl; 
}

void name(std::string first, std::string last)          //two arguments will call this function
{
    std::cout << first << "" << last << std::endl; 
}


