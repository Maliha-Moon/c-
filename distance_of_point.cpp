#include <iostream>
#include <cmath>

using namespace std;

class Point
{
   int x, y;

public:
   void setData(int a, int b)
   {
      x = a;
      y = b;
   }
   void Display()
   {
      cout << "The point is (" << x << " , " << y << ")" << endl;
   }

   // friend float Distance(Point obj,Point obj2);
   float Distance(Point obj, Point obj2)
   {
      return sqrt(pow(obj.x - obj2.x, 2) + pow(obj.y - obj2.y, 2));
   }
};
// float Distance(Point obj,Point obj2)
//    {
//       return sqrt(pow(obj.x-obj2.x,2)+pow(obj.y-obj2.y,2));

//    }

int main()
{
   // Complex obj; // default constructor invoked autometically
   Point obj;
   obj.setData(3, 6);
   obj.Display();
   Point obj2;
   obj2.setData(5, 8);
   obj2.Display();
   Point obj3;
   // obj3.setData(obj,obj2); //invalid cz return type does not match.
   cout << "Distance is " << obj3.Distance(obj, obj2) << endl;
   return 0;
}