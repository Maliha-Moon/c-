#include <iostream>
using namespace std;

class BaseClass // base class
{

private: // declare data member private_info as private
    string private_info;

protected: // declare data member protected_info as protected
    string protected_info;

public: // declare data member public_info and member function as public
    string public_info;

    void setData(string info)
    {
        private_info = info; // assign value in private data member using public member function
    }
    void print()
    {
        cout << private_info << endl;
    }
};

class derivedClass1 : public BaseClass // derivedClass1 inherites BaseClass as public
{
public:
    void set(string pct)
    {
        protected_info = pct; // derived class can access protected data members
    }

    void print1()
    {
        print();
        cout << public_info << endl; // public member remain public 
        cout << protected_info << endl; // protected member remain protected 
    }
};
class derivedClass2 : private BaseClass // derivedClass1 inherites BaseClass as private
{
    
};
class derivedClass3 : protected BaseClass // derivedClass1 inherites BaseClass as protected
{
};

int main()
{
    derivedClass1 obj;
    obj.print1();

    return 0;
}
