//Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units
// by creating a class named 'Triangle' with a function to print the area and perimeter.
#include <iostream>
#include<cmath>
 
using namespace std;
 
class Triangle
{
   
   public:
 

   void PrintAreaPerimeter(int a,int b,int c) 
   {
      double s = (a+b+c) /2.0;
      double area = sqrt (s*(s-a)*(s-b)*(s-c));

      cout << "Perimeter = " <<s<<endl;
      cout << "Area = " <<area << endl;
   }
};
 

int main() {
    Triangle obj;
   
    obj.PrintAreaPerimeter(3,4,5);
    return 0;
}