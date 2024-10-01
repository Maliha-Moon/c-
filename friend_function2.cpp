#include <iostream>
using namespace std;
class c2; // forward declaration for class c2
class c1  // define class c1
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
    friend void swapC1C2(c1 &o1, c2 &o2); // friend function declaration
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
    friend void swapC1C2(c1 &o1, c2 &o2); // friend function declaration
};

void swapC1C2(c1 &o1, c2 &o2) // friend function definition
{
    int temp = o1.a;
    o1.a = o2.a;
    o2.a = temp;
}

int main()
{
    c1 obj1; // instantiation for c1
    obj1.setA(10);

    c2 obj2; // instantiation for c1
    obj2.setA(20);

    cout << "Before swap:" << endl;
    obj1.display();
    obj2.display();

    swapC1C2(obj1, obj2); // invoke friend function and pass objects as arguments

    cout << "After swap" << endl;
    obj1.display(); // print value after invoked friend function
    obj2.display();

    return 0;
}
