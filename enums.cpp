#include <iostream>

/*
enums; a user-defined data type that consists of paired
name-integer constants
great if you have a set of potential options
*/

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

enum name {Noah, Zuriel, Gonzalez};
//if you dont explicitely state value of enums, they will implicitly be set to 0, 1, 2, etc. 

int main()
{

    //usually cannot pass strings through switches, but with enums we can!

    Day today = sunday; //wont accept anything besides what is passed in the enum

    switch(today)
    {
        case sunday: std::cout << "It is sunday!";          //can use the enum data type for the case
            break;           
        case monday: std::cout << "It is monday!"; 
            break;
        case tuesday: std::cout << "It is tuesday!"; 
            break;
        case wednesday: std::cout << "It is wednesday!"; 
            break;
        case 4: std::cout << "It is thursday!";             //or associate values
            break;
        case 5: std::cout << "It is friday!"; 
            break;
        case 6: std::cout << "It is saturday!"; 
            break;
    } 
}