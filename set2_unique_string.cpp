/* Given N strings, print unique strings in lexiographical order
N <= 100
|S| <= 100000
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    for (string i : s)
    {
        cout << i << endl;
    }

    return 0;
}