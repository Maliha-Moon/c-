#include <iostream>
using namespace std;
class c2;
class c1
{
public:
    void sum(c2 obj);
};
class c2
{
private:
    int a;
    int b;

public:
    void setData(int i, int y)
    {
        a = i;
        b = y;
    }
    friend void c1::sum(c2 obj);
};

void c1::sum(c2 obj)
{
    cout << "sum = " << obj.a + obj.b << endl;
}
int main()
{
    c2 o2;
    o2.setData(10, 20);

    c1 o1;
    o1.sum(o2);
    // cout << "sum = " << o1.sum(o2) << endl;
}