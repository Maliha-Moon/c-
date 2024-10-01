#include <iostream>
// single class
using namespace std;

class B;
class A
{
private:
    int a;

public:
    void setData(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "a = " << a << endl;
    }
    friend void swapAB(A &o1,B &o2);
};

class B
{
private:
    int b;

public:
    void setData(int y)
    {
        b = y;
    }
    void display1()
    {
        cout << "b = " << b << endl;
    }
   friend void swapAB(A &o1,B &o2);
};

// class C{
//     public:
//     void swapAB(A &o1, B &o2)
//     {
//         int swap = o1.a;
//         o1.a = o2.b;
//         o2.b = swap;
//     }


// };

void swapAB(A &o1, B &o2)
    {
        int swap = o1.a;
        o1.a = o2.b;
        o2.b = swap;
    }

int main()
{
    A a;
    a.setData(10);
    a.display();

    B b;
    b.setData(20);
    b.display1();


    swapAB(a,b);
    a.display();
 b.display1();
    return 0;
}