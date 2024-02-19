#include <iostream>

int main()
{
    /*
    dynamic memory = Memory that is allocated after the program is already compiled and running
    use the 'new' keyword to allocate memory in the heap rather than the stat

    MEMORY GRAPHIC BELOW
    ____________________
    |       HEAP       |
    |__________________|
    |       STACK      |
    |__________________|
    |___GLOBAL/STATIC__|
    |____TEXT(CODE)____|

    useful when we dont know how much memory well need
    Makes code more flexible
    */

   int *p_num = NULL;   //create pointer

   p_num = new int;     //give pointer dynamic memory with keyword 'new'

   *p_num = 21;         //giving value the pointer

   std::cout << "adress: " << p_num << std::endl;       //displays the adress
   std::cout << "value: " << *p_num << std::endl;       //displays the value

   delete p_num;        //free up the memory at the adress of the pointer, 
//                        whenever you use the new operator you should use the delete operator
//                        if not you risk creating a memory leak

    //a common use of dynamic memory is in arrays
    int size;

    std::cout << "How many grades to enter in?: ";  //asking for an input that
    std::cin >> size;                               //we dont know what th user will type

    char *p_grades = NULL;                          

    p_grades = new char[size];                      //p_grades is now the size of what the user typed in

    for(int i = 0; i < size; i++)                   //entering a value for each char just created
    {
        std::cout << "Enter grade number" << i + 1 << ": "; 
        std::cin >> p_grades[i];
    }
    
    for(int i = 0; i < size; i++)                   //displaying the values we inputed
    {
        std::cout << p_grades[i] << " " << std::endl; 
    }

    
}