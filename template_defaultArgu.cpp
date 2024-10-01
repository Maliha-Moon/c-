#include <iostream>
using namespace std;
//When you include default arguments in a template class, you provide default values for one or more template parameters.
template<class T=int, class U=char, class V=float>
class A{
    T num;
    U c;
    V num2;
    public:
    A(T n1,U n2,V n3)
    {
        num = n1;
        c = n2;
        num2 =n3;
    }
    void getData()
    {
        cout << num <<" "<<c<<" "<<num2<<endl;
    }
};
int main()
{
    A <>a(4,'m',5.5);
    a.getData();
    cout<<endl;
    A<char,int>a1('f',6,6.5);
    a1.getData();
}