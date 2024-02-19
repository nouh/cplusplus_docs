#include <iostream> 

void swap_value(int x, int y);          //just so anything in main() can see these functions
void swap_reference(int &x, int &y);    

int main()
{

/*
---------------------------MEMORY_ADRESS----------------------------
*/


    //memory adress; a location in memory where data is stored
    //a memory adress can be accessed with & (adress-of operator)

    std::string name = "Noah";      //variables are containers for data
    int age = 17;                   //memory adresses are where your computer stores that data
    bool student = true;

    std::cout <<&name << '\n';      //numbers are likely to change everytime program runs
    std::cout <<&age << '\n';
    std::cout <<&student << '\n';   //will give out hexidecimal (can be converted to decimal with online tools)

    //                                if we changed all of these values to decimals we could see
    //                                based on the difference between the numbers, the amount of memory they take up
    //                                in bytes



/*
------------------PASS_BY_VALUE_VS_PASS_BY_REFERENCE-----------------
*/

    int x = 1;
    int y = 2;

    std::cout << "Initial: \n"; 
    std::cout << "X: " << x << '\n'; 
    std::cout << "Y: " << y << '\n\n'; 


    swap_value(x,y);                    //swaping the values, but using pass by value

    std::cout << "Pass by value: \n"; 
    std::cout << "X: " << x << '\n'; 
    std::cout << "Y: " << y << '\n\n'; 


    swap_reference(x,y);                //swapping the values, but using pass by reference

    std::cout << "Pass by reference: \n";
    std::cout << "X: " << x << '\n'; 
    std::cout << "Y: " << y << '\n\n'; 

}

void swap_value(int x, int y)           //the computer recieves the value of x and y, then makes copies and uses those
{
    int temp = x;
    x = y;
    y = temp; 
}

void swap_reference(int &x, int &y)     //the computer recieves the memory adress x and y, then references those
{                                       //making it actually change the values stored in x and y
    int temp = x;
    x = y;
    y = temp; 

//                                        make sure to use these pass by references whenever possible
}

