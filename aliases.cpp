#include <iostream>
#include <vector> 

typedef std::vector<std::pair<std::string, int>> pairlist_t; //very complex and long data type
//standard writing convention is to add a _t at the end of your typedef name

namespace first
{
    pairlist_t pairlist;                                     //that we can now declair very easily

    int x = 1;
}

namespace second
{
    int x = 2; 
}

int main ()
{
    int x = 0;                          //by default we will use the values given in out main function
    std::cout << x << std::endl;

    std::cout << first::x << std::endl; //we can call different values from different name spaces

    using namespace second;             //the keyword using makes it so we whatever method youre in
    std::cout << x << std::endl;        //from then on use the values from the specified name space

    using std::cout;                    //the using keyword also allows us to cut down on some typing
    using std::string;
    using std::endl;                  
    
    string name = "Noah"; 
    cout << name << endl; 
}

/*
typedefs will only work in their respective files, but does not need to be called or specified
namespaces will also only work in their respective files but do need to be called or specified
the using keyword will only work in its respective method, almost like a header to a method

headers seen in 
*/

