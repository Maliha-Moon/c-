#include <iostream>
using namespace std;

class Person // create class
{
public: // access specifier
    static int count; //static data member declaration to store information that is shared by all objects in a class. 

private: // access specifier
    string name;
    int id;
    int age;
    string gender;

public: // access specifier
    void SetInfo(string n, int i, int a, string g)
    {
        name = n;  // Assign passed parameters to member variables
        id = i;
        age = a;
        gender = g;
        count++; //  static data member can be increased each time an object is created
    }

    void GetInfo()
    {
        cout << "Name: " << name << endl;  // print members value
        cout << "Id: " << id << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "count = " << count << endl; // print static count
    }

    static int show() // static mathode
    {
        // can access only static data member & satic member function
        cout << "Number of person = " << count << endl;  // print static count
    }
};

int Person::count = 0; // explicitly defined and initialized outside the class using the scope resolution operator.

int main()
{
    Person obj1,obj2,obj3; // instantiated
    // call mathode
    obj1.SetInfo("Haline", 002345, 20, "Female");
    obj1.GetInfo();

    obj2.SetInfo("Arth", 12345, 22, "Male");
    obj2.GetInfo();

    obj2.SetInfo("Liana", 12345, 21, "Female");
    obj2.GetInfo();

    Person::show(); // call static mathode  
}