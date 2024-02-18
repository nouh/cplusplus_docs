#include <iostream> 

int main ()
{
/*
--------------------------STRING_FUNCTIONS---------------------------
*/
    std::string hello = "Hello";
    //string declaration

    hello.length(); 
    //returns number of charectures in a string

    hello.empty();
    //returns false if string has 0 charectures, true if string has > 0 charectures

    hello.clear(); 
    //clear method, clears a string

    hello.append("Hello"); 
    //appends text in parenthesis to end of given string

    hello.at(0); 
    //returns the char at a given index

    hello.insert(4,  " World");
    //inserts a string at given index

    hello.find('N'); 
    //returns index(s) of given char in a string

    hello.erase(5, 10);
    //erases specified charectures in given string 

    //more string fuctions at cplusplus.com/reference/string
}