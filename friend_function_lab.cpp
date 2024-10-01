#include <iostream>
using namespace std;

class c1; // forward declaration for class c1 which will declare friend function
class c2  // define class c2
{
public:
    void sum(c1); // declare member function which will be used as friend function for class c1 
};

class c1 // define class c1
{
private:
    int a, b;

public:
    void setAB(int x, int y)
    {
        a = x;
        b = y;
    }

    friend void c2::sum(c1 o1); // declare friend function 
};

void c2 ::sum(c1 o1) // definition of friend function 
{
    cout << "The summation of a and b: " << o1.a + o1.b << endl;
}
int main()
{
    c1 obj1; // instantiated for c1
    obj1.setAB(10, 20);
    c2 obj2; // instantiated for c1
    obj2.sum(obj1); // invoke friend function using obj2 as it is member function of c2 and pass obj1 as arguments
    return 0;
}