#include <iostream>
using namespace std;

class BaseClass{
    public:
    int var_base;
    virtual void dis()
    {
        cout << "var_base=" << var_base <<endl;
    }
};

class DerivedClass: public BaseClass{
    public:
    int var_der;
    void dis()
    {
        cout << "var_base=" << var_base <<endl;
         cout << "var_der=" << var_der <<endl;
    }
};

int main()
{
    BaseClass *baseptr;
    BaseClass obj;
    DerivedClass d;
    DerivedClass *derptr;
    baseptr = &d;
     baseptr->var_base = 10;
      
     baseptr->dis();
      baseptr->var_base = 199;
      derptr = &d;
      derptr->var_der=500;
     baseptr->dis();

    obj.var_base=100;
    obj.dis();

}