#include <iostream>

using namespace std;

class Person
{
private: // access specifier
  // declare attributes as private to hide data
    string name;
    int id;
    int age;
    string gender;

public:  // access specifier
    // encapsulate all the attributes and 'SetInfo' and 'GetInfo' methode into a single unit
    
    void SetInfo() // methode (setter) that can access and manipulate private attributes
    {
        cout << "Enter name:";  
        getline(cin, name);
        cout << "Enter id:";
        cin >> id;
        cout << "Enter age:";
        cin >> age;
        cout << "Enter gender:";
        getline(cin, gender);
        getline(cin, gender);
    }

    void GetInfo() // methode (getter) that can access and manipulate private attributes
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

int main()
{
    Person obj; // create object

    // obj.name; // throw an error as object cannot access private attributes directly
    obj.SetInfo(); // invoke (setter) methode 
    obj.GetInfo(); // invoke (getter) methode

    return 0;
}