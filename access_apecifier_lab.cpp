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
    void setData1(string pct)
    {
        protected_info = pct; // derived class can access protected data members
    }

    void print1()
    {
        cout << "---Publicly Inherit--" << endl;
        print();                        // invoke to print private data member
        cout << public_info << endl;    // public member remain public
        cout << protected_info << endl; // protected member remain protected
    }
};
class derivedClass2 : private BaseClass // derivedClass1 inherites BaseClass as private
{
public:
    void setData2(string info1, string info2) // function to access data members
    {
        public_info = info1;
        protected_info = info2;
    }
    void print2()
    {
        cout << "---Privately Inherit--" << endl;
        cout << public_info << endl;    // public member become protected
        cout << protected_info << endl; // protected member remain protected
    }
};
class derivedClass3 : protected BaseClass // derivedClass1 inherites BaseClass as protected
{
public:
    void setData3(string info1, string info2) // function to access data members
    {
        public_info = info1;
        protected_info = info2;
    }
    void print3()
    {
        cout << "---Protectedly Inherit--" << endl;
        cout << public_info << endl;    // public member become protected
        cout << protected_info << endl; // protected member remain protected
    }
};

int main()
{
    derivedClass1 obj;
    obj.setData("Private");
    obj.setData1("Protected");
    obj.public_info = "Public";
    obj.print1();

    derivedClass2 obj2;
    obj2.setData2("Public", "Protected");
    obj2.print2();

    derivedClass3 obj3;
    obj3.setData3("Public", "Protected");
    obj3.print3();

    return 0;
}
