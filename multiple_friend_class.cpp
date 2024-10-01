#include <iostream>
using namespace std;
class c1 // define class c1
{
private:
    int a;

public:
    void setA(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "Value of a inside c1:" << a << endl;
    }
    friend class c3; // declare c3 as friend class
};
class c2 // define class c2
{
private:
    int a;

public:
    void setA(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "Value of a inside c2:" << a << endl;
    }
    friend class c3; // declare c3 as friend class
};
class c3 // define friend class of both c1 and c2
{
public:
    void swapC1C2(c1 &o1, c2 &o2) // take object of c1 and c2 as parameters
    {
        int temp = o1.a; // access private data members of c1 and c2
        o1.a = o2.a;
        o2.a = temp;
    }
};
int main()
{
    c1 obj1; // create object of c1
    obj1.setA(10);
    obj1.display();

    c2 obj2; // create object of c1
    obj2.setA(20);
    obj2.display();

    c3 obj3;                   // create object of c1
    obj3.swapC1C2(obj1, obj2); // pass objects of c1 and c2 as arguments

    cout << "After swap" << endl;
    obj1.display();
    obj2.display();

    return 0;
}
