#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void setDataByObject(Complex obj1, Complex obj2) // define function using objects of class type as parameters
    {
        a = obj1.a + obj2.a; // add numbers using object parameters
        b = obj1.b + obj2.b;
    }

    void print()
    {
        cout << "Complex number : " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    Complex o1, o2, o3; // instantiated class Complex
    o1.setData(3, 6);
    o2.setData(5, 7);
    o1.print();
    o2.print();
    o3.setDataByObject(o1, o2); // invoke function passing objects as arguments
    o3.print();
    return 0;
}

