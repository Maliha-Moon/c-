#include<iostream>
using namespace std;

class Circle{
   private:
   float radius;
   
   public:
   float setData(){
      cin >> radius;
   }

   float getArea()
   {
      return 3.14*radius*radius;
   }
   float getCircumference(){
    return 2*3.14*radius;
   }
};


int main()
{
   Circle obj;

   obj.setData();

   cout << "Area is " << obj.getArea() << endl;
   cout << "Circumference is " << obj.getCircumference() << endl;

   return 0;
}