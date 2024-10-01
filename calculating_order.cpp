#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 3 / 2.0;    // calculate 1.5 but always store integer part
    double b = 3 / 2.0; // calculate 1.5 and store 1.5 -> store fraction
    double c = 3 / 2;   // calculate 1 also store 1 cz it does not calculate 1.5
    cout << c << endl;
    cout << b << endl;
    cout << a << endl;
    cout << 'c' + 1 << endl;
    return 0;
    /* precedence:
       double > float > long long int > long int > int > character
       ***calculation occurs according to higher data type***
    */
}