//hybride inheritance = combination of more than one type of inheritance
#include<iostream>
using namespace std;

class Person{
 public:
   string name;
   int age;
   void Show()
    {
        cout << name << endl;
        cout << age << endl;
    }
};

class Student : public Person{
     public:
     string dep;
     int id;
   void Show1()
    {
        Show();
        cout << dep << endl;
        cout << id << endl;
    }
};

class Teacher : public Person 
{
    public:
    int salary;
     void Show2()
    {
        Show();
        cout << salary << endl;
    }
};

class Employee : public Student, public Teacher{ // multiple
      public:
    void show4()
    {
        cout << "Employee" << endl;
    }
    
};

class Engineer : public Employee{
    public:
    void show3()
    {
        cout << "Engineer" << endl;
    }
};

int main()
{
    Student c;
    c.name = "MOON";
    c.age = 20;
    c.dep = "CSE";
    c.id = 123456;
    c.Show1();

    Teacher b;
    b.name = "MOON";
    b.age = 20;
    b.salary = 1000;
    b.Show2();

    Employee e;
    e.show4();

    Engineer en;
    en.show3();
    //en.Person::Show();
}