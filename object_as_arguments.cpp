#include<iostream>
using namespace std;

class MyClass
{
    int a,b;
    public:
    void setData(int x,int y)
    {
        a = x;
        b = y;
    }

    //pass by value ->Things you modify here won't be reflected in the object passed to it.
    int ObjectAsArgument(MyClass o1,MyClass o2) //have access of the data and functions associated that object 
    {
        a = o1.a+o2.a;
        b= o1.b+o2.b;
    }
    
    //pass by reference ->Things you modify here will be reflected in the object passed to it. No copy of the object is created
   // int ObjectAsArgument(MyClass &o1,MyClass &o2);
    void Display()
    {
        cout << a <<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    MyClass obj1,obj2,obj3;
    obj1.setData(5,8);
    obj1.Display();

    obj2.setData(3,6);
    obj2.Display();

    obj3.ObjectAsArgument(obj1,obj2); //obj3 store the result of ObjectAsArgument
    obj3.Display();

    return 0;
}