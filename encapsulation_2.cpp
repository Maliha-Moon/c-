// Encapsulation is defined as binding together the data and the functions that manipulate them.
#include<iostream>
using namespace std;

class Employee
{
    private: 
    // encapsulated data
    string name;
    string company;
    int age;

    public: // do have access to these private members
    void setName(string Name) // receive parameters
    {
        name = Name;
    }
    string getName() // return and print value
    {
        return name;
    }
    void setCompany(string Company)
    {
        company = Company;
    }
    string getCompany()
    {
       return company;
    }
    void setAge(int Age)
    {
        if(Age>=18) // condition 
      age = Age;
    }
    int getAge()
    {
        return age;
    }
    Employee(string n1,string n2, int n3)
    {
        name = n1;
        company = n2;
        age = n3;
    }

};

int main()
{
    Employee obj1= Employee("moon","XYZ",20);
    obj1.setName("Moon");
    obj1.setCompany("XYZ");
    obj1.setAge(15);
    cout << obj1.getName() << " is " << obj1.getAge() << " year's old. " << endl << "works at " << obj1.getCompany() << endl;
    return 0;
}