#include <iostream>

class example
{
    private:        //usually want our variables to be private
        int x = 1;

    public:         //and our constructors / methods to be public
        example()
        {
            x = x; 
        }

        example(int x)
        {
            set_x(x); 
        }

        int get_x()
        {
            return x;       //returns our private x variable (which usually we wouldnt be able to access)
        }
        int set_x(int x)    //changes our private x variable (which usually we wouldnt be able to access)
        {   
            this -> x = x;
        }
};

int main()
{
    example ex;                             //creating 2 classes
    example ex1(7); 

    std::cout << ex.get_x() << '\n';        //getting the values of x for each instance of the class with getter
    std::cout << ex.get_x() << '\n';

    ex.set_x(5);                            //chaning value with setter
    ex1.set_x(9);

    std::cout << ex.get_x() << '\n';        //getting the values of x after changing the values with setter
    std::cout << ex.get_x() << '\n';
    

}