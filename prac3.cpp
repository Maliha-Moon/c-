#include<iostream>
using namespace std;

class c1;
class c2
{
    private:
    int x;
    public:
    void sum(c1);
};

class c1
{
    private:
    int x;
    public:
    void setData(int n)
    {
        x=n;
    }
    friend void c2::sum(c1 o1);
};

void c2:: sum(c1 o1)
{
    cout <<"the value of x "<<o1.x<<endl;
}

int main()
{
    c1 obj1;
    c2 obj2;
    obj1.setData(10);
    obj2.sum(obj1) ;

}