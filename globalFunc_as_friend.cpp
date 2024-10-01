#include <iostream>
using namespace std;

class base
{
private:
    int var1;
    int x;

    void add(int n)
    {
        x += n;
    }

protected:
    int var2;
    int salary;

public:
    base()
    {
        var1 = 10;
        var2 = 20;
        salary = 0;
        x = 5;
    }

    friend void display(base &ob);
    friend int increment(base &o);
    friend void double_x(base &o);
    // note: reference ensures any modifications made inside the friend function are reflected in the original object.
};

void display(base &ob)
{
    cout << "variable1 is " << ob.var1 << endl;
    cout << "variable2 is " << ob.var2 << endl;
}

int increment(base &o)
{
    o.salary = o.salary + 1000;
    return o.salary;
}

void double_x(base &o)
{
    int x2 = o.x;
    o.add(x2);
}

int main()
{
    base object;
    
    display(object);
    int sal = increment(object);
    cout << "salary is " << sal << endl;
    
    double_x(object);
    cout << "x = " << object.x << endl;
    return 0;
}