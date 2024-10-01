#include <iostream>
using namespace std;

class Employee // define class
{
    string name;
    int id;

public:
    void getData()
    {
        cout << "Enter name:" << endl;
        cin >> name;
        cout << "Enter id:" << endl;
        cin >> id;
    }
    void putData()
    {
        cout << "name: " << name << endl;
        cout << "id: " << id << endl;
    }
};

int main()
{
    int num;
    cout << "Enter number of objects:" << endl;
    cin >> num;
    Employee emp[num]; // array of objects with num size
    for (int i = 0; i < num; i++)
    {
        emp[i].getData(); // Input data for the current employee
        emp[i].putData(); // Output data for the current employee
    }

    return 0;
}