#include<iostream>
using namespace std;

class C1;

class C2{
    public:
    void sum(C1 &c);
};

class C1{
    private:
    int a;
    public:
    void setData(int x)
    {
        a = x;
    }

    friend void C2 :: sum(C1 &c);
};

void C2::sum(C1 &c)
{
    c.a = c.a + 10;
};

int main()
{
   
}