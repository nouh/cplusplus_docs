#include <iostream> 

/*
A structure that groups related variables under one name
can hold multiple values of different data types
variables in a struct are known as members
can be accessed with . (class member acess operator)
*/

void print(student student);
void print_reference (student &student);
void change (student &student, double gpa);

struct student                          //kind of like a data type, can be used to create "variables"
{
    std::string name; 
    double gpa;
    bool enrolled = true;               //can set default values (if not explicity changed this will be the value)
};

int main()
{

    student student1;                   //creating a student1 "variable"    

    student1.name = "Noah Gonzalez";    //members can be accessed with a dot
    student1.gpa = 3.1;
                                        //not setting value for member "enrolled" because the defualt value applies to this student
    student student2;

    student2.name = "Luna Dabloona";    //setting member for each
    student2.gpa = 2.3;
    student2.enrolled = false;

    student student3;

    student3.name = "Mom Gonzalez";
    student3.gpa = 4.0;
    student3.enrolled = false; 

/*
-----------------------PASSING_STRUCT_AS_ARGUMENT------------------------
*/

    print(student1);                        //can pass an entire struct as an argument
    print_reference(student2);
    change(student1, 4.0); 


}

void print(student student)                 //recieving a struct (this is passing by value)
{
    std::cout << student.name << '\n';      //displaying value of copies of members in the struct
    std::cout << student.gpa << '\n';
    std::cout << student.enrolled << '\n';

}

void print_reference (student &student)     //receiving a structs memory adress
{
    std::cout << student.name << '\n';      //displaying value of members in the struct
    std::cout << student.gpa << '\n';
    std::cout << student.enrolled << '\n';
}

void change (student &student, double gpa)
{
    student.gpa = gpa;                      //chaning member in a struct with a function
}