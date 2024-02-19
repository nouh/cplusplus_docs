/*
funtion template; describes what a function looks like
to generate overloaded functions, each using different data types
*/

#include <iostream>
template <typename T, typename U>       //template declaration      the more typenames the different data types you can use!

//T add (T x, T y)            common naming convention for function templates is "T"
//{
//    return x + y;           because of the function template, this can now take any data type
//}                           must use the same data type (because both have T as their data type)


auto sub (T x, U y)         //now we can take 2 different data types    using auto the compiler will deduce what return type
{                           //                                          should be
    return x - y; 
}

int main()
{
    //add(1, 2);
    sub(10.3, 4);
}