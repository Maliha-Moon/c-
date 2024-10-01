#include <iostream>
using namespace std;

class BaseClass // base class
{
    // base class properties
public:
    void Print1()
    {
        cout << "This is Base Class" << endl;
    }
};

class DerivedClass : public BaseClass // DerivedClass is derived from a single base class BaseClass and inherit it's properties as public
{
    // derived class properties
public:
    void Print2()
    {
        cout << "This is Derived Class" << endl;
    }
};

int main()
{
    DerivedClass obj; // create object of derives class
    obj.Print1(); // invoke methode of the base class
    obj.Print2(); // invoke methode of the derived class 
    return 0;
}