//runtime polymorphism with the help of virtual function
#include<iostream>

using namespace std;

class BaseClass
{
  public:
  int a =5;
//   void display()
//   {
//      cout << "Base class " << endl;
//      cout << "Base class a is " << a << endl;
//   }

virtual void display()
  {
     cout << "Base class " << endl;
     cout << "Base class a is " << a << endl;
  }
};

class DerivedClass : public BaseClass
{
    public:
    int b = 500;
   
    void display()
    {
         cout << "Base class " << endl;
        cout << "Base class a is " << a << endl;
        cout << "Derived class a is " << b << endl;
    }

};

int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj1;
    DerivedClass obj2;
    base_class_pointer = &obj2;

    base_class_pointer->display();//call base class cz it is pointer of base class
    //obj2.display();

     DerivedClass  * derived_class_pointer;
      derived_class_pointer = &obj2;

      derived_class_pointer->display();
}
