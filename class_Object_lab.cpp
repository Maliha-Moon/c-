#include <iostream>
using namespace std;

class MyClass // declare class or blueprint for an object. A user defined data type
{
    // define class
public: // access specifier
    // contain members 
    
    int x; // data members
    int y;

    void Number() // member functon
    {
        cout << "Numbers are: " <<endl;
    }
};

int main()
{
    MyClass obj1,obj2; // instantiated or create objects of a class type to use and access members of the class
    
    // Access data members using dot operator and assign values
    obj1.x = 5;
    obj1.y = 10;

    obj2.x = 20;
    obj2.y = 30;

    obj1.Number(); // obj1 access and call member function using dot operator
    // Print attribute's values 
    cout << obj1.x << endl
         << obj1.y << endl;

    obj2.Number(); // obj2 access and call member function using dot operator
    // Print attribute's values 
    cout << obj2.x << endl
         << obj2.y << endl;

    return 0;
}