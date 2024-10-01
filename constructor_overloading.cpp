#include<iostream>
using namespace std;

class Point
{
    int a,b;
    public:
    Point()
    {
        a=0;
        b=0;
    }
    Point(int x,int y)
    {
        a=x;
        b=y;
    }
    Point(int x)
    {
        a=x;
        b=0;
    }
    void Display()
   {
      cout << "The point is (" << a <<" , "<<b << ")" <<endl;
   }
};

int main()
{
    Point obj1;
    obj1.Display();

    Point obj2(5);
    obj2.Display();

    Point obj3(5,8);
    obj3.Display();

    return 0;
}