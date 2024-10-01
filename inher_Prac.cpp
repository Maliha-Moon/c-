#include <iostream>
using namespace std;

class Person // base class inherited by derived class Student
{
private:
    string name;
    int age;

public:
    void setMember()
    {
        cin >> name >> age;
    }
    void display()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
    }
};

class Student : public Person //derived class Student is derived from base class Person and furthur inherited by another derived class
{

private:
    string dep;
    int id;

public:
    void setValue()
    {
        cin >> dep >> id;
    }
    void display1()
    {
        display();
        cout << "department: " << dep << endl;
        cout << "id: " << id << endl;
    }
};

class Programmer : public Student // Another derived class Programmer is derived from derived class Student which acts as base class here
{
private:
    string course;
    int fee;

public:
    void setData()
    {
        cin.ignore(); // to erase new line character
        getline(cin,course);
        cin >> fee;
    }
    void display2()
    {
        display1(); 
        cout << "course: " << course << endl;
        cout << "fee: " << fee << endl;
    }
};

int main()
{
    Programmer p1; // create object of second derived class
    
    p1.setMember(); 
    p1.setValue(); 
    p1.setData();
    p1.display2();

    return 0;
}