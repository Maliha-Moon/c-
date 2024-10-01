//average of two num
#include<iostream>
using namespace std;

class Sample
{
    int a,b;
    public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }  
    void Display()
    {
        cout<<"a= " <<a<<" "<<"b= " << b<<endl;
    }

    friend float Average(Sample s);
};

float Average(Sample s)
{
   return (s.a+s.b)/2.0;
}

int main()
{
    Sample o1,avg;
    o1.setData(25,40);
    o1.Display();
    cout << "Average = " << Average(o1) << endl;

    return 0;


}