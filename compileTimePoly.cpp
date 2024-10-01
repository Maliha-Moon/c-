#include <iostream>
using namespace std;

class Overloading
{
public:
    int sum(int a, int b)
    {
        cout<<"Function with two integer" <<endl;
        return a + b;
    }

    float sum(float a, float b)
    {
         cout<<"Function with two float" <<endl;
        return a + b;
    }

    int sum(int a, int b, int c)
    {
         cout<<"Function with three integer" <<endl;
        return a + b + c;
    }
};
int main()
{
    Overloading obj1;
    cout <<obj1.sum(3, 4)<<endl;
    cout<<obj1.sum(3.5f, 4.5f)<<endl;
    cout<<obj1.sum(3, 4, 5)<<endl;

    return 0;
}
