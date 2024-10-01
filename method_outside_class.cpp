#include <iostream>
 
using namespace std;
 
class Car
{
   private:
      int a,b,c;
    public:
      int d,e;
    
    void setData(int a1, int b1, int c1); //declaration
    void getData()
    {
        cout << "The value of a = " <<a<<endl;
        cout << "The value of b = " <<b<<endl;
        cout << "The value of c = " <<c<<endl;
        cout << "The value of d = " <<d<<endl;
        cout << "The value of e = " <<e<<endl;
    }
};
// function/methode definition outside the class
void Car :: setData(int a1,int b1,int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main() {
 
   Car obj;
   // directly access
   obj.d=10;
   obj.e=20;
  // obj.a=100; //Compile time error 

   obj.setData(1,4,8); //indirectly access (ENCAPSULATION)
   obj.getData();

    return 0;
}