#include <iostream>

/*
inhertiance; a class can recieve attributes and methods from another class
children classes inherit from parent classes
Hleps reuse code
*/

class animals                   //parent class
{
    public:
        bool alive = true;
    void eat()
    {
        std::cout << "This animal is eating\n";
    }
};

class dog : public animals      //although the dog class is empty, it is inheriting the attributes from the paretn class
{                               
                                
};

class cat : public animals      
{
    void meow()
    {
        std::cout << "Meow!\n"; //can give new methods and values etc, to children functions
    }
};

int main()
{
    dog dog;                    //dog class can be seen here

    std::cout << dog.alive << '\n';
    dog.eat(); 

    cat cat;                   //cat method can be seen here

    std::cout << cat.alive << '\n';
    cat.eat(); 

    cat.meow();
}