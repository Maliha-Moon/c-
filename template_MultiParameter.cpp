#include <iostream>
using namespace std;

template <class T1, class T2> // multiple (coma separated) type/parameter
class A
{
    T1 num;
    T2 name;
   public:
     A(T1 a,T2 b)
     {
        num=a;
        name = b;
     }
     void getData()
     {
        cout << this->num <<endl<<this->name;
     }
};

int main()
{
    A<int,char>a(5,'m');
    a.getData();
    A<int,float>a1(10,8.5);
    a1.getData();
}