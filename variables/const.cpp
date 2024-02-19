#include <iostream> 

int main()
{

/*
--------------------------------CONST--------------------------------
*/

    const std::string NAME = "Noah";            //these variables cannot be changed
    const std::string LAST_NAME = "Gonzalez";   //standard naming - all caps

    //make sure to use them whenver possible! 

/*
----------------------------CONST_PERAMETER--------------------------
*/


    /*
    const perameter; peratmeter that cannot be changed (effectively read only)
    code is more secure and converys intent
    useful for references and pointers
    */

    int age = 0;                                    
    int fav_num = 12;

    example(age, fav_num);

}

void example(const int &age, const int &fav_num)    //means we cannot change the values we recieve
{//                                                   not useful when passing by value, 
    std::cout << age << '\n';//                       but very useful when passing by reference or pointers
    std::cout << fav_num << '\n';
}