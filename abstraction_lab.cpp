#include <iostream>
using namespace std;

class BaseClass // abstract class
{
public:
    int a = 100;
    void display()
    {
        cout << "Inside abstract class." << endl;
    }

    virtual void message() = 0; // true virtal methode
};

class DerivedClass : public BaseClass //DerivedClass is derived from BaseClass
{
    void message() // overriding and implementing true virtual function
    {
        cout << "Derived Class" << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer; // create pointer of base class type
    DerivedClass obj2;             // create object of derived class
    base_class_pointer = &obj2;    // points to the derived class objrct
    base_class_pointer->message(); // invoke message()
    return 0;
}