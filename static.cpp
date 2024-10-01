#include <iostream>
using namespace std;

class A{
    public:
    static int count;
    string name;

    void setdata(string n)
    {
        name =n;
        count++;
    }
    void display()
    {
        cout << "count = " << count <<endl;
    }
    static void nm()
    {
        cout << "count = " << count <<endl;
    }
};
int A::count =0;
int main()
{
    A ob1,ob2,ob3;
    ob1.setdata("mmmm");
     ob2.setdata("mmmm");
      ob2.setdata("mmmm");
    A::nm();
}