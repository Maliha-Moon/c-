#include<iostream>

using namespace std;

//heirarchical = many derived class from a single base class
class A{
    public:
    int a;
    int b;

    void display()
    {
        cout << a+b <<endl;
    }
};

class B : public A{
    public: 
    int c;

    void display1()
    {
        cout << (a+b)*c << endl;
    }
};

class C : public A{
    public:
    int d;

    void display2(){
        cout << (a+b)*d <<endl;
    }
};

int main()
{
    B b1;
    b1.a=10;
    b1.b=20;
    b1.c=30;

    b1.display1();

    C c1;
    c1.a=5;
    c1.b=15;
    c1.d=25;

    c1.display2();

    return 0;
}

