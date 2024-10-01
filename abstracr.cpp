#include<iostream>
using namespace std;

class A{ //abstract class
   public:
   int a=100;
   void Display()
   {
    cout <<"Abstract class" << endl;
   }
   virtual void Show()=0; // true virtual 
};

class B : public A
{
    public:
    void Show()
    {
        cout <<"ABstraction" <<endl;
    }
};

int main()
{
    A *ptr;
    B b;
    ptr = &b;
    ptr->Show();
    return 0;
}