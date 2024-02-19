#include <iostream>


void walk(int steps);

int main()
{
    /*
    recurison; when a function invokes itself from within
    break a complex concept into repeatable steps

    pros - less code, cleaner, a bit easier to understand at times

    cons - uses more memory, slower
    */


   walk(10);

}

void walk(int steps)                                    //itterative aproach
{
    for(int i = 0; i < steps; i++)
    {
        std::cout << "You take an iterative step!\n"; 
    }
}

void r_walk(int steps)                                  //recursive aproach
{                                                       
    if(steps > 0)                                       //bsae case (when do we stop)
    {                                                   
        std::cout << "You take a recursive step!\n";    
        r_walk(steps - 1);                             
    }
}

/*
you will end up inside a fucntion, inside a function...
possible to end up in an infite loop, creating a stack overflow
when you invoke a function, you add a frame to the stack, 
when the stack is overloaded, you will get a stack overflow
*/

//good for sorting methods and tree data structures