#include <bits/stdc++.h>
using namespace std;
/*  Constraints:
    1 <= l <= 10^9
    1 <= b <= 10^9
    print area.
*/
int main()
{
    //int l, b;
    long long int l,b; //as ans can be > 10^9
    cin >> l >> b;
    // cout << l*b << endl; //wrong ans if result is > 10^9 [overflow]
    //cout << l * 1ll * b << endl; // if given that take two INTEGER input
    cout << l*b << endl;
    return 0;
}