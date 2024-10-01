// compile time polymorphism
#include <iostream>
using namespace std;

class MyClass
{
public:
    int sum(int a, int b) //function with two integer parameters
    {
        cout << "Function with two int parameters." << endl;
        return a + b;
    }

    float sum(float a, float b) //function with two float parameters
    {
        cout << "Function with two float parameters." << endl;
        return a + b;
    }

    int sum(int a, int b, int c) //function with three integer parameters
    {
        cout << "Function with three parameters." << endl;
        return a + b + c;
    }
};

int main()
{
    MyClass obj;
    cout << obj.sum(5, 6) << endl; // function is invoked with two integer arguments
    cout << obj.sum(2.4f, 6.5f) << endl; // function is invoked with two float arguments
    cout << obj.sum(3, 4, 5) << endl; // function is invoked with three integer arguments
    return 0;
}