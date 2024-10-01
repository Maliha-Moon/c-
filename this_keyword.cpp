#include<iostream>
using namespace std;

class A{
    int a; //class variable
    public:
    A & setdata(int a) //local variable
   // void setdata(int a)
    {
        this->a=a;
        return *this; //return an object
    }
    void getdata()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    //'this' is a keyword which is a pointer that points to the object which is being created which invokes the member functions
    A a;
    a.setdata(4).getdata();
    //a.getdata();
    return 0;
}