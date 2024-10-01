#include <iostream>
using namespace std;

class Calculate
{
public:
    int a;

public:
    void setData(int x)
    {
        a = x;
    }
    Calculate add(Calculate Ea, Calculate Eb) // take object as arguments and return object
    {
        Calculate Ec;
        Ec.a = Ea.a + Eb.a;

        // returning the object
        return Ec;
    }
    void print() // Method to print the object's content
    {
        cout << "a = " << a << endl;
    }
};
int main()
{
    Calculate obj1, obj2, obj3; // create objects

    obj1.setData(10);
    obj2.setData(20);

    obj3 = obj3.add(obj1, obj2); // Passing object as an argument to function add()
    obj3.print();                // Print the content of obj3

    return 0;
}
