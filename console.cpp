#include <iostream>

int main()
{
/*
---------------------------PRINTING2CONSOLE--------------------------
*/
    std::string hello = "Hello";

    std::cout << "This is a documentation file!"; //next thing printed will be on same line
    std::cout << std::endl;                       //will end the line
    std::cout << hello << " World!";              //printing variables + text
    std::cout << '\n';                            //next line

/*
-------------------------------USER_INPUT----------------------------
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
}