#include <iostream>
using namespace std;


class A{
    public:
    int a;
    int b;
    void display()
    {
        cout << a+b <<endl;
    }
};

//class B : private A{ // C cannot access a,b
class B : public A{
    public:
    //public -> a,b
    int c;
   void display1()
   {
    cout<< a+b+c<<endl;
   }
};

class C : public B{
    public:
     //public -> a,b,c
    int d;
    void display3()
    {
       cout<< a+b+c+d <<endl; 
    }
};
int main(){
    
    C c1;
    c1.a=10;
    c1.b=20;
    c1.c=30;
    c1.d=40;

    c1.display3();
    //c1.display();

    B b1;
    b1.a=90;
    b1.b=80;
    // B cannot access private member directly
    b1.c=70;
    b1.display1();
    return 0;
}