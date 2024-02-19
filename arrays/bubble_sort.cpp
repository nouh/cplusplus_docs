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
    
   //For ascending order use > (in if statment) | for descending order use < (in if statment)

    for(int i = 0; i < size - 1; i++)
    {
        for(int j; j < size - i - 1; i++)
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

   