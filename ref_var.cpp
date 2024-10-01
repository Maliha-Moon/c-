#include<iostream>
using namespace std;

int main()
{
    int a=5,b=6;
    int &c= a;  //referencing variable.  value remain same. both have same memory address
    c = 10;
    
    cout << &a << endl; // address is a hexadecimal number(0-f)
    cout << &b<< endl; 
    cout << &c << endl;
    cout << a << endl; 

    /*
    int x, y;
    x = 10;
    y = 30;
    int &a = x; // value remain same. both have same memory address(hexadecimal) 
    int &b = y;

    cout << "x= " << x << endl;
    cout << "y= " << y << endl;

    x=x+10;
    b=0;
    cout << "reference variable a= " << a << endl;
    cout << "reference variable b= " << b << endl;

    cout << "x= " << &x << endl;
    cout << "y= " << &y << endl;
    cout << "reference variable a= " << &a << endl;
    cout << "reference variable b= " << &b << endl;
    */
   
   return 0;
}