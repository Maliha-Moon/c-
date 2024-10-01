#include<iostream>
using namespace std;

class A{
   public:
   int a = 10;
   virtual void display()
   {
    cout << "Function overridding" <<endl;
    cout << "a = " << a <<endl;
   }
};

class B:public A{
    public:
    int b =20;
    void display()
   {
    cout << "Function overridding" <<endl;
    cout << "b = " << b <<endl;
   }
};
int main()
{
    A *ptr;
     B b;
    ptr = &b;
  ptr->display();
  // b.display();
}