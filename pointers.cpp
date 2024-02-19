#include <iostream>

int main()
{
/*
-------------------------------POINTERS--------------------------------
*/

    //pointers = variables that stores a memory adress of another variable
    //           many times its easier to just work with an adress

    //& adress-of operator
    //* dereference operator

    std::string name = "noah";      //variable
    int age = 17;                   

    std::string *p_name = &name;    //pointer
    int *p_age = &age;              //common naming convention is putting a p before the name of the original variable
    std::cout << *p_name << '\n';   //data type *name = &original variable; 
    std::cout << *p_age << '\n'; 

    std::string rappers[] = {"Benji Blue Bills", "Playboi Carti", "Lil Yachty", "Travis Scott"};

    std::cout << rappers << '\n';       //arrays are already adresses

    std::string *p_rappers = rappers;   //so when creating a pointer we dont need the & next to the value (arrays name)

/*
-----------------------------NULL_POINTERS-----------------------------
*/

    //null; a value that means something has no value
    //a null pointer is a pointer that is not pointing at anything

    //nullptr; keyword representing a null pointer literal

    //nullptrs are helpful when determing if an adress was successfully assigned to a pointer

    int *pointer = nullptr; 
    int x = 123;
    //*pointer;          dereferencing a pointer can lead to undefined behavior
    //x = &pointer;      referencing a pointer thats not assigned a value can lead to undefined behavior

    pointer = &x; 

    if(pointer == nullptr)                      //a good way to check if you succesfully assigned something to a null ptr
    {//                                           usefull when working with dynamic memory
        std::cout << "adress was not assigned";
    } else                                      //when referencing a nullptr be careful that your code isnt dereferncing null
    {                                           //use an if statment to check if this is the case to be safe
        std::cout << "adress was assigned"; 
        std::cout << *pointer; 
    }
}