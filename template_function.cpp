#include <iostream>
using namespace std;

//template<typename T>
template<class T> //T = generic data type
void Swap(T &a, T &b) // generic function .
//Note: now this function can use any data type 
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5, b = 7;
    cout << a << " " << b << endl;
    Swap<int>(a, b); //when invoked, int type passes to generic function
    cout << a << " " << b << endl;

    char c = 'c', d = 'd';
    cout << c << " " << d << endl;
    Swap<char>(c, d);
    cout << c << " " << d << endl;

    return 0;
}