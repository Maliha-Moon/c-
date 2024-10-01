
#include<iostream>
using namespace std;

class employee
{
    
    public:
    string name;
    string company;
    int id;

   //private: // object is unaccessible
    public:

    // DEFAULT CONSTRUCTOR 
    // doesn’t take any argument. It has no parameters. It is also called a zero-argument constructor.
    // if you do not provide any constructor explicitly in a C++ class, the C++ compiler will automatically generate a default constructor.
    //This default constructor takes no parameters and initializes data members to their default values based on their types.
    employee()
    {
        name = "Moon";
        company = "ABC";
        id = 1234;
    }
    // PARAMETERIZED Constructor
    employee (string Name, string Company, int Id){ //constructing object based on the parameters we pass
        //construct -> initialize object with values
        // attribute = parameter
        name = Name;
        company = Company;
        id = Id;
    } 
};



int main()
{
    //DEFAULT CONSTRUCTOR
    employee emp;
    cout << emp.name << endl << emp.company << endl << emp.id;

    // PARAMETERIZED Constructor
    // explicit call
    employee emp = employee("Maliha","google",1234); //constructive object. call constructor
    // Implicit call
    // employee emp("Maliha","google",1234); // call constructor

    cout << emp.name << endl ;
    cout << emp.company << endl ;
    cout << emp.id << endl ;

    // employee emp2 = employee("Ayan","XYZ",4567); //constructive object

    // cout << emp2.name << endl ;
    // cout << emp2.company << endl ;
    // cout << emp2.id << endl ;

    return 0;
}