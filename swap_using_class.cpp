#include<iostream>
using namespace std;

class Swap
{
    int a,b;
    public:
     Swap()
     {
        cin >>a>>b;
     }
     int operation()
     {
         int temp = a;
         a = b;
         b = temp;
     }
};

int main()
{
    Swap obj;
    obj
}