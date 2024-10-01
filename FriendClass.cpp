#include <iostream>
using namespace std;
class c2;
class c1
{
private:
    string name;
    int salary;

public:
    void setData(string s, int i)
    {
        name = s;
        salary = i;
    }
    friend class c2;
};
class c2
{
public:
    void display(c1 obj)
    {
        cout << "name: " << obj.name << endl;
        cout << "salary: " << obj.salary << endl;
    }
};
int main()
{
    c1 obj;
    obj.setData("moon",2000);
    c2 obj2;
    obj2.display(obj);
}