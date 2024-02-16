#include <iostream> 

/*
return types (the function must return something)
all data types
(described in gen_docs.cpp)

void; will not return anything
*/

void hello_world(std::string name, int age);

int main()                                      //this is the main function
{
    std::string name = "Noah";      
    int age = 17;
    hello_world(name, age);                     //calling the function (arguments)
    //                                            making the function aware of variables in the local function

    return 0;
}

void hello_world (std::string creator, int age) //state the data type then name the data type
{//                                               (can be the same of different name)
    std::cout << "Hello World" << std::endl; 
    std::cout << creator << " made this program" << std::endl; 
    std::cout << "They are " << age << " years old" << std::endl; 
}