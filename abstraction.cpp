#include <iostream>
using namespace std;

class BaseClass
{
public:
    int a = 100;
    void display()
    {
        cout << "Abstract class" << endl;
    }

    virtual void function() = 0;
};
class DerivedClass : public BaseClass
{
public:
    void function()
    {
        cout << "a = " << a << endl;
        cout << "DErived class" << endl;
    }
};
class a:public BaseClass
{
    public:
    void function()
    {
        cout << "DErived class no:2" << endl;
    }
};

int main()
{
    BaseClass *ptr;
    DerivedClass obj;
    a a1;
    ptr = &obj;
    ptr->function();
   
    return 0;
}
