// Ambiguous = same name multiple property
#include <iostream>
using namespace std;

class A // First base class inherited by single derived class
{
public:
    int a = 10;

    void display()
    {
        cout << "a= " << a << endl;
    }
};

class B // Second base class inherited by single derived class
{
public:
    int b = 20;

    void display()
    {
        cout << "b= " << b << endl;
    }
};

class C : public A, public B // class C is derived from two base class class A and class B
{
public:
    void display()
    {
        cout << "a+b = " << a + b << endl; // Access properties of two base class
    }
};

int main()
{
    C o1;  // create object of derived class
    // invoke methode using scope resulation operator to avoid ambiguity
    o1.A::display(); 
    o1.B::display(); 
    o1.C::display(); 
    return 0;
}