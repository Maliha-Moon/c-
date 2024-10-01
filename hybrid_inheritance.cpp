#include <iostream>
using namespace std;

class A // Base class 
{
public:
    int a = 10;

    void printValueA()
    {
        cout << "a = " << a << endl;
    }
};

class B : public A // B is derived from base class A (Heirarchical Inheritance)
{
public:
    int b = 20;
    void printValueB()
    {
        printValueA();
        cout << "b = " << b << endl;
    }
};

class C : public A // Another derived class C is derived from base class A (Heirarchical Inheritance)
{
public:
    int c = 30;
    void printValueC()
    {
        cout << "c = " << c << endl;
        cout << "a+c = " << a + c << endl;
    }
};

class D : public B, public C // derived class D is derived from two base class B and C (Multiple Inheritance)
{
public:
    int d = 40;
    void printValueD()
    {
        printValueB();
        printValueC();
        cout << "d = " << d << endl;
        cout << "b+c+d = " << b + c + d << endl;
    }
};

class E : public D // E is derived from D and furthur inherited by F(Multilevel Inheritance)
{
public:
    int e = 50;
    void printValueE()
    {
        printValueD();
        cout << "e = " << e << endl;
        cout << "d+e = " << d + e << endl;
    }
};

class F : public E // F is derived from E (Multilevel Inheritance)
{
public:
    int f = 60;
    void printValueF()
    {
        printValueE();
        cout << "f = " << f << endl;
        cout << "e+f = " << e + f << endl;
    }
};

int main()
{
    F obj; //create object of derived class F
    obj.printValueF();

    return 0;
}