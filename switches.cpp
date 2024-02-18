#include <iostream> 

int main()
{
    int day; 

    std::cout << "What day of the week is it? (1-7): " << std::endl;
    std::cin >> day; 

    switch(day){                                            //switch (variable) {}
        case 1:                                             //case (possible instance of variable):
            std::cout << "Its Sunday!" << std::endl;        //runs if the case evaluates true
            break;                                          //leaving switch (without will fall through switch)
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
}

