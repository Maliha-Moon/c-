#include <iostream>
using namespace std;

template<typename T>
T SwapValue (T &x, T &y)
{
   int temp = x;
   x = y;
   y = temp;
}

int main()
{
    int a=10,b=20; 
    cout << "Before swap" << endl << "a = " << a <<endl << "b = " << b <<endl;

    SwapValue<int>(a,b);
     cout << "After swap" << endl << "a = " << a <<endl << "b = " << b <<endl;

     char l = 'l', m = 'm';
     cout << "Before swap" << endl << "l = " << l <<endl << "m = " << m <<endl;
     swap<char>(l,m);
     cout << "After swap" << endl << "l = " << l <<endl << "m = " << m <<endl;
}