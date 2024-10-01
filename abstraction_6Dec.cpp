#include <iostream>

using namespace std;

// an abstract class
class BaseClass
{
public:
  int a = 100;
  void display()
  {
    cout << "Inside abstract class." << endl;
  }

  virtual void message() = 0; // true virtal methode which has no body(implementation)
  // 0 indicate it is a true/pure virtual methode
  // abstract class cannot have any object
};

class DerivedClass : public BaseClass
{
  void message() // overrid/implement true virtual function
  {
    cout << "Derived Class" << endl;
  }
};
int main()
{
  // DerivedClass obj2;

  BaseClass *base_class_pointer;
  // BaseClass obj1;
  DerivedClass obj2;
  base_class_pointer = &obj2;
  base_class_pointer->message();
  return 0;
}