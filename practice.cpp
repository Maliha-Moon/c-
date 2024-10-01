#include <iostream>
#include<cmath>
 
using namespace std;
 
class Calculator; //forwaerd declaration
class Complax
{
   int a,b;
   public:
   void setData(int x,int y)
   {
      a = x;
      b = y;
   }
   void Display()
   {
      cout << "a= " << a <<" b= "<<b<<endl;
   }

   friend Calculator;
};

class Calculator
{
   public:
   int setData(int a,int b)
   {
      return(a+b);
   }
   int SumComplax(Complax o1,Complax o2)
   {
      return ((o1.a+o2.a)+(o1.b+o2.b));
   }


};



int main()
{
   Complax obj1,obj2;
   Calculator obj3;

   obj1.setData(3,5);
   obj1.Display();
   obj2.setData(4,8);
   obj2.Display();

   cout << "Complax sum ="<<obj3.SumComplax(obj1,obj2)<<endl;
   
  return 0;
}