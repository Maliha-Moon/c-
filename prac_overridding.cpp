#include <iostream>

using namespace std;

class Parent
{
public:
    void Moon()
    {
        cout << "My name is Moon" << endl;
        cout << "This is base class" << endl;
    }
};

class Child : public Parent
{
public:
    void Moon()
    {
        cout << "My name is Moon" << endl;
        cout << "This is derived class" << endl;

        // Call Overridden Function From Derived Class
        Parent :: Moon(); // call base class function

        //Moon(); // call derived class function infinite times
    }
};

int main()
{
    Child obj;
    obj.Moon();
    
    // Parent obj2;
    // obj2.Moon();
    return 0;
}