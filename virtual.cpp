#include<iostream>
using namespace std;

class A{
    public:
    int a;
    virtual void display()
    {
       cout << "base class" << endl;
       cout << "a = " << a <<endl;
    } 
};

class B:public A{
    public:
    int b=90;
    void display()
    {
       cout << "derived class" << endl;
       cout << "b = " << b <<endl;
    } 
};

int main()
{
    A *ptr;
    ptr->a =10;
    ptr->display();
    ptr->a =330;
    ptr->display();
    B ob;
    B *btr;
    btr = &ob;
    //ptr= &ob;
    //ptr->b =20;
    btr->b=80;
    btr->display();
}