#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 50;

    //    cout << "Address of a is " << &a << endl;
    //    cout << "Address of b is " << &b << endl;

    int &c = a; // reference variable.

    cout << "c = " << c << endl;
    //    c = 20;
    //    cout << a << endl;

    int *ptr; // declare pointer
    ptr = &b; // pointer store address of variable b

    cout << "The address : " << ptr << endl;              // print pointer
    cout << "The address of pointer is " << &ptr << endl; // print address of pointer

    *ptr = 100;                                 // dereference
    cout << "The value of b: " << *ptr << endl; // print dereference

    return 0;
}