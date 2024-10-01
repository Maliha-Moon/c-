#include <iostream>
using namespace std;

template <typename T>
class A{
    private:
    T num;
    public:
    A(T n)
    {
        num = n;
    }
    T display()
    {
        return num;
    }

};

int main()
{

    A<int>a(7) ;
    A<char>a2('a');
    cout << a.display()<<endl;
    cout << a2.display()<<endl;
}