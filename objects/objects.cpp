#include <iostream>

/*
A collection of attributes and methods
they can have charecturistics that perform actions
can be used to mimic real world items
create from a class which acts as a blueprint
*/

class person                        //class
{
    private:                        //private access modifier
        std::string name;           //only things in this class can access these variables
        std::string occupation;     
        int age;                    

    public:                         //everything in the program can access these variables
        person()                    
        {
            this -> name = "Mom";        
            occupation = "Teacher";
            age = 38;
        }

        person(std::string name, std::string occupation)    //constructor (allows us to pass arguments when creating a new class)
        {                                                   //work like overloaded functions
            this -> name = name;                            //different perametes will call different constructors
            this -> occupation = occupation;                
        }


        person(std::string name, std::string occupation, int age)       
        {
            this -> name = name;                            //this operator means local variables in this class(this)                      
            this -> occupation = occupation;                //in this case equal the arguments called                 
            this -> age = age; 
        }

        void eat()                                          //methods
        {                                                   //the class can perform all these actions
            std::cout << "This person is eating\n";
        }
        void drink()
        {
            std::cout << "This person is drinking\n";       
        }
        void sleep()
        {
            std::cout << "This person is sleeping\n";
        }



};

int main()
{       
    person human1;                              //creating new person (with the constructor) (no parenthesis with no arguemnts)
    person human2("Luna", "Baker");             //works like overloaded functions! (overloaded constructors)                  
    person human3("Noah", "Unemployed", 17);    

    human2.eat();                               //calling a method
    human1.drink();
    human3.sleep();
}
    