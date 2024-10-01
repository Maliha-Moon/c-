#include <iostream>
using namespace std;

class BaseClass // base class
{
public:
    int a = 10;
    void display() // overridden function
    {
        cout << "Base class a is " << a << endl;
    }
};

class DerivedClass : public BaseClass // DerivedClass is derived from BaseClass
{
public:
    int b = 100;
    void display()  // overriding function
    {
       cout << "Derived class a is " << b << endl;
    }
};

int main()
{
    BaseClass *ptr; // pointer of BaseClass type
    DerivedClass obj1; //create object of derived class
    ptr = &obj1; // pointer points to object of DerivedClass
    ptr -> display(); // invoke overridden function using pointer

    obj1.display(); // invoke overridden function from derived class
    obj1.BaseClass::display(); //Access of Overridden Function to the Base Class
    return 0;
}