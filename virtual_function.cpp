#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base=1;
    // note: virtual allow to execute the most derived version
    virtual void display() 
    {
        cout << "var_base= " << var_base << endl;
        cout << "Display Base Class" << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived=2;

    void display() // override
    {
         cout << "var_base= " << var_base << endl;
        cout << "var_derived= " << var_derived << endl;
        cout << "Display derived Class" << endl;
    }
};

int main()
{

    BaseClass *base_class_pointer; // creat a pointer of base class
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
}