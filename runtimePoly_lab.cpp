#include <iostream>
using namespace std;

class Person // base class inherited by Professor and Student
{
protected:
    string name;
    int age;

public:
    virtual void getdata() {} // define virtual function
    virtual void putdata() {}
};

class Professor : public Person // Professor is derived from Person
{
    int publications;

public:
    void getdata() // overriding virtual function
    {
        cin >> name >> age >> publications;
    }

    void putdata() // overriding virtual function
    {

        cout << name << " " << age << " " << publications << endl;
    }
};

int main()
{
    Person *ptr; // create pointer of Base class type
    Professor p; // create object of Professor derived class
    ptr = &p;    // pointer points to object of Professor derived class

    ptr->getdata(); // invoke overriden function from Professor derived class based on object type
    ptr->putdata();

    return 0;
}