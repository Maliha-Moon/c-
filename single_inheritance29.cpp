// Inheritance -> Methode of reusing properties
// Single Inheritane -> one derived class from one base class
#include <iostream>
using namespace std;

class Person // base class
{
public:
    string name;

    // private: //private member cannot be inherited and access directly

protected: // derived class can inherit and access protected member. Any class except child class cannot access protected member
    int age = 20;

public:
    void display1()
    {
        cout << name << endl;
        cout << age << endl;
    }
};

//child class can access public and protected member

// class {{derived_class_name}} : {{visibility_mode}} [how we inherit base class's members] base_class_name
class Employee : public Person 
// class Employee : private Person 
// class Employee : protected Person
 
// employee is derived from person -> inherite

// default visibility is private
{
    // name,age,display1
    //  employee(derived class) has all the properties of person(base class)

// public: name // how we inherit base class's member
// protected: age

/*
 if we access base class as private
 public -> private
 protected -> private
*/

/*
 if we access base class as public
 public -> public
 protected -> protected
 private -> private
*/

/*
 if we access base class as protected
 public -> protected
 protected -> protected
*/

public:
    int id;
    int salary;
    void display2() // to show id , salary
    {
        cout << id << endl;
        display1(); // to show name and age as we inherit it
        cout << salary << endl;
    }
};
int main()
{
    Employee e1;
    // e1 is called person class's properties
    e1.name = "Kamal Islam.";
    // e1.age = 30;// main function cannot access protected member directly
    e1.id = 123456;
    e1.salary = 20000;
    e1.display2();

    return 0;
}