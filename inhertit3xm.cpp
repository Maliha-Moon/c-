#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll_num;
    int year;

    void setInfo()
    {
        cout << "Enter name of the student:" << endl;
        cin >> name;
        cout << "Enter name of the roll:" << endl;
        cin >> roll_num;
        cout << "Enter name of the year:" << endl;
        cin >> year;
    }

    void printInfo()
    {
        cout << "Name: " << name << endl
             << "Roll: " << roll_num << endl
             << "Year: " << year << endl;
    }
};

class CSE : public Student
{
public:
    string dep1;
    void setInfo1()
    {
        setInfo();
        cout << "Enter dep1: " << endl;
        cin >> dep1;
    }
    void printInfo1()
    {
        printInfo();
        cout << "dep1: " << dep1 << endl;
    }
};

class Civil : public Student
{
public:
    string dep2;
    void setInfo2()
    {
        setInfo();
        cout << "Enter dep2: " << endl;
        cin >> dep2;
    }
    void printInfo2()
    {
        printInfo();
        cout << "dep2: " << dep2 << endl;
    }
};

class Pharmacy : public Student
{
public:
    string dep3;
    void setInfo3()
    {
        setInfo();
        cout << "Enter dep3: " << endl;
        cin >> dep3;
    }
    void printInfo3()
    {
        printInfo();
        cout << "dep3: " << dep3 << endl;
    }
};

int main()
{
    CSE cse;
    Civil civ;
    Pharmacy pha;

    cse.setInfo1();
    cse.printInfo1();
    civ.setInfo2();
    civ.printInfo2();
    pha.setInfo3();
    pha.printInfo3();
    return 0;
}
