#include <iostream>

using namespace std;

class Student
{
private:
      string course;
      int fee;

public:
      string name;
      int id;

      // for private attributes
      void setInfo()
      {
            course = "OOP";
            fee = 5000;
      }

      void display()
      {
            cout << name << endl;
            cout << id << endl;
            cout << course << endl;
            cout << fee << endl;
      }
};

class Programmer : private Student
{ // programmer(derived class) inherit Employee(base class) privately
  // Programmer class is derived privately from the Student class
  //all public and protected members of Student become private members of Programmer.
public:
      int age;
      int salary;

      void setData(string n, int i)
      {
            setInfo();
            name = n;
            id = i;
      }

      void display1()
      {
            // public members of the base class can only be accessed by the member functions of the derived class.
            display();

            cout << age << endl;
            cout << salary << endl;
      }
};

int main()
{
      Programmer p1, p2;

      /*
         derived class's object cannot access private members directly
         p1.name ="Moon";
         p1.id=12345;
      */

      p1.setData("Moon", 1234);

      // p1.setInfo(); // cannot access directly

      p1.age = 20;
      p1.salary = 20000;

      p1.display1();

      return 0;
}
