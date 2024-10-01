#include<iostream>
using namespace std;

class employee
{
    //private:
   //protected:
    public:
    string name;
    string company;
    int id;  
};



int main()
{
    employee emp;
    emp.name = "Moon";
    emp.company = "XYZ";
    emp.id = 1234;
    cout << emp.name << endl ;
    cout << emp.company << endl ;
    cout << emp.id << endl ;

    return 0;
}