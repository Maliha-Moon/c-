#include <iostream>
using namespace std;

class Person // base class which will be inherited by more then one derived class
{
public:
    int id;
    string name;
    int age;
    void display1()
    {
        cout << id << endl;
        cout << name << endl;
        cout << age << endl;
    }
};

class Programmer : public Person //derived class Programmer derived from a single base class Person
{
public:
    string programmingLanguages;
    string phone;
    void display2()
    {
        display1();
        cout << programmingLanguages << endl;
        cout << phone << endl;
    }
};

class Manager : public Person //Another derived class Manager derived from a single base class Person
{
public:
    string skill;
    int salary;

    void display3()
    {
       display1();
        cout << skill << endl;
        cout << salary << endl;
    }
};

int main()
{
    Programmer p1; // create object of Programmer derived class
    Manager m1; // create object of Manager derived class
    
    p1.id = 12000002;
    p1.name = "Alexa";
    p1.age = 20;
    p1.programmingLanguages = "C++, Java";
    p1.phone = "016729488";
    p1.display2();
   
    m1.id = 1200001;
    m1.name = "Jon";
    m1.age = 21;
    m1.skill = "Critical thinking";
    m1.salary = 20000;
    m1.display3();

    return 0;
}