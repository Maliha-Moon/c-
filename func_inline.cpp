#include<iostream>
using namespace std;

inline int cube(int a) 
/*  inline function replaces the function call with the actual code of the function at the call site during compilation.
* Or, function code will copied at the place where the function is being called.
* In essence, an inline function is a suggestion to the compiler to insert the function's code directly into the calling code
 rather than generating a separate function call.
*/
{
    return a*a*a;
}

int main()
{
    int a=2;
    int b = cube(a);
    cout << b;
    return 0;
}