#include <iostream> 

int main()
{
    std::string square[3][3]; //[rows][collums]   initializing an empty 2d array

    //initializing an array with values (must give collum value)
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},  
                            {"Challenger", "Duragno", "Ram 1500"}};

    std::cout << cars[0][0];    //row 0 col 0
    std::cout << cars[0][1];    //row 0 col 1
    std::cout << cars[0][2];    //row 0 col 2

    std::cout << cars[1][0];    //row 1 col 0
    std::cout << cars[1][1];    //row 1 col 1
    std::cout << cars[1][2];    //row 1 col 2

    std::cout << cars[2][0];    //row 2 col 0
    std::cout << cars[2][1];    //row 2 col 1
    std::cout << cars[2][2];    //row 2 col 2

    //a more efficient way to do this is with nested loops

    int rows = sizeof(cars)/sizeof(cars[0]);            //sizeof(entire array)/sizeof(one row in the array);
    int cols = sizeof(cars[0])/sizeof(cars[0][0]);      //sizeof(one row in the array)/sizeof(on elemnt in that row);

    for (int i = 0; i < rows; i++)                      //getting the memory adress of the rows in the array
    {
        for(int j = 0; j < cols; j++)                   //printing each elemnt in the row
        {
            std::cout << cars[i][j] << " "; 
        }
        std::cout << std::endl; 
    }

    return 0; 
}