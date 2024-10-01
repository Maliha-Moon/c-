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
    void setInfo(string crs, int fe)
    {
        course = crs;
        fee = fe;
    }

    void display()
    {
        cout << name << endl;
        cout << id << endl;
        cout << course << endl;
        cout << fee << endl;
    }
};

class Programmer : public Student
{ // programmer(derived class) inherit Employee(base class) publicly
public:
    int age;
    int salary;

   
    void display1()
    {

        display();

        cout << age << endl;
        cout << salary << endl;
    }
};

int main()
{
    //Note: Object's of base class cannot access properties of derived class
    //Student p1, p2;

    Programmer p1, p2;

    p1.name = "Moon";
    p1.id = 12345;

   // through set method, derived class can get access of base class's private attributes. 

    p1.setInfo("OOP", 5000); // cannot access directly

    p1.age = 20;
    p1.salary = 20000;

    p1.display1();

    return 0;
}
