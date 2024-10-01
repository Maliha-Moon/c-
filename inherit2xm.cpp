#include <iostream>
using namespace std;

// multiple
class A //base class 1
{
public:
    int a;
    void setData()
    {
        cout << "Enter A:" << endl;
        cin >> a;
    }
    void print()
    {
        cout << "a = " << a << endl;
    }
};

class B //base class 2
{
public:
    int b;
    void setData()
    {
        cout << "Enter B:" << endl;
        cin >> b;
    }
    void print()
    {
        cout << "b = " << b << endl;
    }
};

class C : public A, public B // derived class C derived from A and B
{
public:
    void printResult()
    {
        cout << "a+b = " << a + b << endl;
    }
};

int main()
{
    C obj;
    obj.A::setData();
    obj.B::setData();
    obj.A::print();
    obj.B::print();
    obj.printResult();

    return 0;
}