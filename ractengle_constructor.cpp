#include<iostream>
using namespace std;

class Rectangle
{
  int a,b;
  public:
  Rectangle(int x,int y)
  {
    a=x;
    b=y;
  }

  float Area()
  {
    return a*b;
  }
};

int main()
{
    Rectangle obj1(4,5);
    Rectangle obj2(5,8);
    cout <<"Area = "<<obj1.Area() <<endl;
     cout <<"Area = "<<obj2.Area() <<endl;
    return 0;
}