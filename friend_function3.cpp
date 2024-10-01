// Friend function of a class and member function of another class
#include <iostream>
using namespace std;

class Complex; // forward declaration

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int SumByComplex(Complex , Complex );
    
};

class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void Display()
    {
        cout << "a= " << a << "b= " << b << endl;
    }
    friend int Calculator ::SumByComplex(Complex o1, Complex o2);
};

int Calculator :: SumByComplex(Complex o1, Complex o2)
{
     return (o1.a+o2.a);
}

int main()
{
    Complex obj1,;
    Calculator obj2;

     obj1.Display();
    obj2.Display();
    
    int sum = SumByComplex(obj1, obj2); // Call the friend function
    cout << "Sum of a from Complex objects: " << sum << endl;

}