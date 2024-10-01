#include <iostream>
using namespace std;
class c3;
class c1
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
    friend class c3;
    //friend void SwapC1C2(c1 &o1, c2 &o2);
};

class c2
{
private:
    int b;

public:
    void setData(int y)
    {
        b = y;
    }
    void display()
    {
        cout << "b = " << b << endl;
    }
     friend class c3;
    //friend void SwapC1C2(c1 &o1, c2 &o2);
};
class c3{
    public:
     void SwapC1C2(c1 &o1, c2 &o2)
{
    int temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}

};
// void SwapC1C2(c1 &o1, c2 &o2)
// {
//     int temp = o1.a;
//     o1.a = o2.b;
//     o2.b = temp;
// }
int main()
{
    c1 obj1;
    c2 obj2;
    cout << "Before swap" << endl;
    obj1.setData(10);
    obj1.display();
    obj2.setData(20);
    obj2.display();
    cout << "After swap" << endl;
    // SwapC1C2(obj1, obj2);
    // obj1.display();
    // obj2.display();
    c3 obj3;
    obj3.SwapC1C2(obj1,obj2);
     obj1.display();
    obj2.display();
}