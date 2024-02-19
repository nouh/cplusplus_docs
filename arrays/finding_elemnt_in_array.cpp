#include <iostream> 

int searchArray(int array[], int size, int elemnt);

int main() 
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};                //array were searching
    int size = sizeof(numbers)/sizeof(numbers[0]);                  //size of array
    int index;                                                      
    int my_num;

    std::cout << "Enter elemnt to search for: " << '\n'; 
    std::cin >> my_num;                                             //recieve elemnt to search for

    index = searchArray(numbers, size, my_num);                     //calling function

    if(index != -1)                                                 //returning index or not in array
    {
        std::cout << my_num << " is at index" << index << std::endl; 
    } else
    {
        std::cout << my_num << " is not in the array" << std::endl; 
    }
}

int searchArray(int array[], int size, int elemnt)                 //linear search
{ //                                                                  will search ever elemnt in array until elemnt is found
    for(int i = 0; i < size; i++)
    {
        if(array[i] == elemnt)
        {
            return i; 
        }
    }

    return -1;                                                      //returning -1 usually means something is not there in 
}//                                                                   programming
