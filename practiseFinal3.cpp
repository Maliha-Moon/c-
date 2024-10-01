#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int age;
    void Display()
    {
        cout << name << endl;
        cout << age << endl;
    }
};

class Manager : public Employee
{
public:
    int salary;
    string phon;
    void Display1()
    {
        Display();
        cout << salary << endl;
        cout << phon << endl;
    }
};

class Programmer : public Employee
{
public:
    int id;
    string language;
    void Display2()
    {
        Display();
        cout <<id << endl;
        cout <<language << endl;
    }
};

int main()
{
    Manager m;
    m.name = "xbn";
    m.age=30;
    m.salary=10000;
    m.phon = "0192837465";
    //m.Display();
    m.Display1();

    Programmer p;
    p.name = "moon";
    p.age=25;
    p.id=1234;
    p.language = "c++";
    p.Display2();
}
