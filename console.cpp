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
    //std::getline(std::cin, height);                               when input may contain spaces

    std::cout << "You are " << age << " years old and " << height << " feet tall!" << std::endl;    

    std::cin.clear();               //will reset any error flags when std::cin fails to interperet the input
    fflush(stdin);                  //will clear the input buffer


/*
--------------------FILLING_ARRAY_WITH_USER_INPUT---------------------
*/

    std::string cars[5];                            //arrays are static data structures
    int size = sizeof(cars)/sizeof(cars[0]);        //this means that when our programn is running we cannot change 
    std::string temp;                               //the size of the array

    for (int i = 0; i < size; i++)                
    {
        std::cout << "Enter a food you like or 'q' to quit #" << i + 1<< ": ";
        std::getline(std::cin, temp); 

        if(temp == "q")                             //so that we dont add q to our array if the user quits
        {
            break; 
        } else
        {
            cars[i] == temp;
        }
    }

    std::cout << "You like the following cars: \n";

    for (int i = 0; cars[i].empty(); i++)           //traversing the array, but leaving out the empty spaces
    {
        std::cout << cars << '\n'; 
    }
}

