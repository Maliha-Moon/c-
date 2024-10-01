#include <iostream>
using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string name1, string name2, int i)
    {
        firstName = name1;
        lastName = name2;
        id = i;
    }
    void printPerson()
    {
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "id: " << id << endl;
    }
};

class Student : public Person
{
public:
    int score[6];
    Student(string name1, string name2, int i, int array[])
    {
        firstName = name1;
        lastName = name2;
        id = i;
       for(int i=0)
    }
};