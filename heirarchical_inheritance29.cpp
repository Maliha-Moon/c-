#include <iostream>
using namespace std;

class Person // base class
{
public:
    int id;
    string name;
    int age;
    void display()
    {
        cout << id << endl;
        cout << name << endl;
        cout << age << endl;
    }
};

class XYZ : private Person{ // derived class don't effect base class 

};
class Programmer : public Person // derived class 1
{
public:
    string programmingLanguages;
    string phone;
    void display1()
    {
        display();
        cout << programmingLanguages << endl;
        cout << phone << endl;
    }
};

class Manager : public Person
{ // derived class 2
public:
    string skill;
    void display2()
    {
        display();
        cout << skill<<endl;
    }
};

int main()
{
    Programmer p1;
    Manager m1;

    p1.id = 1200000;
    p1.name = "Topu Saha.";
    p1.age = 20;
    p1.programmingLanguages = "C++, Java";
    p1.phone = "016729475";

    p1.display1();

    m1.id = 1200001;
    m1.name = "Apu Saha.";
    m1.age = 21;
    m1.skill = "Critical thinking";

    m1.display2();

    return 0;
}