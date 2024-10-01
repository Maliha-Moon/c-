#include<iostream>
using namespace std;

class MyClass {
    public: // access specifier
    // members
    int x;
    int y;

    // cout << x << endl // error
    //      << y << endl;
}; // [semicolon]

int main()
{
    MyClass obj1; // declare object
    // Access attributes and set values
    obj1.x = 5;
    obj1.y = 10;

    // Print attribute values
    cout << obj1.x << endl
         << obj1.y << endl;

    // cout << x << endl // error as x,y was not declare in this scope
    //      << y << endl;

    MyClass obj2;

    obj2.x = 20;
    obj2.y = 30;

    cout << obj2.x << endl
         << obj2.y << endl;


    return 0;
}