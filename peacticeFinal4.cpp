#include<iostream>
using namespace std;

class A{
    public:
    virtual void display()
    {
        cout << "Base class" << endl;
    }
};
class B: public A{
    public:
    void display()
    {
        cout << "Base class" << endl;
        cout << "Derived class" << endl;
    }
};

int main()
{
    A *ptr;
    ptr->display();
    // B b;
    // ptr = &b;
    // ptr->display();
}