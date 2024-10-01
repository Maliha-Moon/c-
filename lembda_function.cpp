#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << [](int x)
    { return x + 2; }(2)
         << endl;
    cout << [](int x, int y)
    { return x + y; }(2, 4)
         << endl;
    auto sum = [](int x, int y, int z)
    { return x + y + z; };
    cout << sum(2,3,4) << endl;
    return 0;
}