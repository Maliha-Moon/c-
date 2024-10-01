#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* -10^9 < int < 10^9 | INT_MIN < int < INT_MAX
       -10^12 < long int < 10^12
       -10^18 < long long int < 10^18
    */
    int a = 100000; // 10^5
    int b = 100000; // 10^5
   // int c = a * b;  // cause overflow as it exceed 10^9 (become 10^10)
    //long long c = a*b; // calculate integer as a,b are int and cannot store long long int 
    long long c = a* 1ll *b; // 1ll convert int into long long
    cout << c << endl;

    long long a1 = 100000; // 10^5
    long long b1 = 100000; // 10^5
    long long c1 = a * b;  //  10^10
    cout << c1 << endl;

    //    int max = INT_MAX;
    //    cout << max << endl;
    //    cout << max+1 << endl; // cycle the range
    return 0;
}