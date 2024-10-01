#include <iostream>
using namespace std;

class Student // declare and define a class
{
public:              // access specifier
    string stu_name; // data members
    int stu_id;

    Student() // default constructor expliitely
              // constructor with no arguments
    {
        // constructor definition
        cout << "Student from CSE department" << endl;
    }

    Student(string name, int id) // parameterized constructor
                                // constructor with arguments
    {
        // constructor definition
        stu_name = name; // use parameters to initialize object
        stu_id = id;     
    }
};

int main()
{
    // Constructor Overloading with two different constructors of class name
    // compiler call constructor based on the arguments
    Student obj1;                        // Default constructor gets invoked automatically when we create the object of the class
    Student obj2("Ayan Rahman", 120000); // when object of the class is created parameterized constructor gets invoked implicitely 
                                         //and initial values passed as arguments to constructor function

    cout << "name: " << obj2.stu_name << endl;  // object acess data members and print values 
    cout << "id: " << obj2.stu_id << endl;

    return 0;
}