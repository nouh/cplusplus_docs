#include <iostream>
#include <vector> 

typedef std::vector<std::pair<std::string, int>> pairlist_t; 
//standard writing convention adds _t at end of typedef name

namespace first
{
    pairlist_t pairlist;                                     //can now declair with the typedef name

    int x = 1;
}

namespace second
{
    int x = 2; 
}

int main ()
{
    int x = 0;                          //by default computer uses values given in main function
    std::cout << x << std::endl;

    std::cout << first::x << std::endl; //can call different values from name spaces

    using namespace second;             //keyword using - changes default values to new specified ones
    std::cout << x << std::endl;

    using std::cout;                    
    using std::string;
    using std::endl;                  
    
    string name = "Noah";               //example of keyword using in other contexts
    cout << name << endl; 
}


