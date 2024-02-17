#include <iostream> 

/*
return types (the function must return something)
all data types
(described in gen_docs.cpp)

void; will not return anything
*/


//functions cannot see inside of other functions, therefore we must allow functions to see other variables 
//(arguments and defining)

void hello_world(std::string name, int age);    //declaration (declair functions before calling them)
int favorite_num(int num);                      //declartaion (declair functions before calling them)

int main()                                      //this is the main function
{
    std::string name = "Noah";      
    int age = 17;
    hello_world(name, age);                     //calling the function; (arguments in parenthesis) 
    //                                            making the function aware of variables in the local function

    int num = 7; 
    std::cout << favorite_number(num) << std::endl; 

    return 0;                                   
}

void hello_world (std::string creator, int age) //state the data type then name the data type (defining function)
{//                                               (can be the same of different name)
    std::cout << "Hello World" << std::endl; 
    std::cout << creator << " made this program" << std::endl; 
    std::cout << "They are " << age << " years old" << std::endl;
}

int favorite_number(int num)
{
    return num;                                 //returns given value
}
