#include<iostream>
using namespace std;

class A // class (keyword)_class name [no semicoclon]
{
    public: // Access specifier -> members are accessible from outside the class

    int a,b,c; // variables / attribute / data member
    void display() // methode
    {
        cout << a << endl; // set of code
        cout << b << endl;
        cout << c << endl;
        cout << &a << endl; 
        cout << &b << endl;
    }
}; // [semicolon]

int main()
{
    A obj1;  // class name_object name
    obj1.a=5; // directly access
    obj1.b=6;
    obj1.c=7;

    obj1.display(); 
    
    A obj2;
    obj2.a=50;
    obj2.b=60;
    obj2.c=70;

    obj2.display();


    return 0;
}