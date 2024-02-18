#include <iostream>

//easy to write, not as efficient as some other sorting methods

int main ()
{
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array)/sizeof(array[0]); 


    sort(array, size);

    for(int elemnt : array)
    {
        std::cout << elemnt << " "; 
    }
    


}

void sort (int array[], int size)
{
    int temp;
    int i;

    //For ascending order use > (in if statment) | for descending order use < (in if statment)

    for(i = 0; i < size - 1; i++);              //size -1 because we dont need to compare the last value to anything
    {                                           
        for (int j = 0; j < size - i - 1; j++)  //size - i - 1; because we dont need to short values more than once
        {                                       

            if(array[j] > array[j + 1])         //checking if an elemnts value is greater than value to its right
            {
                temp = array[j];                //shifting elemnt to the right
                array[j] = array[j+1];          
                array[j + 1] = temp;            
            }                                   
        }
    }
}

    /*
    i needed to declair i before the loops because the second loop couldnt 
    see i when it was declaired in the first loop

    i looked up the issue and some people said in c++ for loops even when nested in each other
    have different scopes others said that wasnt the case
    it might just be due to my compiler or something im really not sure
    */