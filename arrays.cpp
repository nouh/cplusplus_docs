#include <iostream>

int main()
{

/*
-------------------------------ARRAYS---------------------------------
*/
    /*
    array = a data structure that can hold multiple values
    values are accessed by an index number
    like a varaible that holds multiple values
    */

    std::string car[] = {"Corvette", "Miata", "Supra"};     //(data type) (array name)[] = {elemnts in array};
    std::string full_name[3];                               //array with no predetermined elemnts; static data structure
    //                                                        (data type) (array name)[size of array];

    full_name[0] = "Noah";                                  //assigning values to empty array
    full_name[1] = "Zuriel";
    full_name[2] = "Gonzalez"; 

    std::cout << car << std::endl;                          //display a memory adress (where the array is located)
    std::cout << car[0];                                    //display first elemnt in the array

    car[0] = "Honda Pilot";                                 //reasigning value of an elemnt in an array


/*
-------------------------------SIZE_OF--------------------------------
*/

    /*
    sizeof() will return the size (in bytes) of whatever is passed into it
    */

    std::cout << sizeof(int) << std::endl;          //int; will always be 4 bytes large
    std::cout << sizeof(double) << std::endl;       //double; will always be 8 bytes large
    std::cout << sizeof(char) << std::endl;         //char; will always be 1 bytes large
    std::cout << sizeof(bool) << std::endl;         //bool; will always be 8 bytes large
    std::cout << sizeof(std::string) << std::endl;  //string; will always be 8 bytes large

    //can be used to calculate how many elemnts are in an array
    //sizeof(array)/sizeof(arrays data type)

/*
-----------------------------FILL_FUNCTION------------------------------
*/
    /*
    fill; fills a rang of elements with a specified value
    fill(begin, end, value)
    begin; begging adress of an array 
    end;   ending adress of an array
    */

    const int SIZE = 60; 
    std::string food[SIZE];

    fill(food, food + (SIZE/3), "Mac'n'Cheese");        //will fill first third the array with macncheese
    fill(food + (SIZE/3), food + 2*(SIZE/3), "Chicken wings");
    fill(food + 2*(SIZE/3), food + SIZE, "Sweet Bread");

    for(std::string foods : food)
    {
        std::cout << food << '\n'; 
    }

/*
------------------------ITTERATING_OVER_AN_ARRAY-------------------------
*/

    for(int i = 0; i < sizeof(full_name)/sizeof(full_name[0]); i++)     //using a for loop
    {
        std::cout << full_name[i] << '\n';
    }

/*
--------------------------------FOR_EACH--------------------------------
*/

    //less syntax than normal for loops, but much less flexible
    //must iterate through each elemnt of the array

    int nums[] = {1, 2, 3, 4, 5, 6};

    for (int num : nums)
    {
        std::cout << num << '\n'; 
    }

/*
-----------------------PASSING_ARRAYS_TO_FUNCTIONS-----------------------
*/

    double prices[] = {420.69, 9.99, 1.01, 99.99};  
    int size = sizeof(prices)/sizeof(prices[0]); 
    function(prices, size);                             //assignement doesnt need square braces

    return 0; 
}

void function(double prices[], int size)                //definition does need square braces
{                                                       //must declair size of array before defining in function
    for(int i = 0; i < size; i++)                       //when defining array in function, the array deminishes to pointer                          
    {                                                   //when using a for each loop this is not nessesary
        std::cout << prices[i] << '\n'; 
    }
}

