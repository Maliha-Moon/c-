/* Given N strings. print unique strings lexicographical order with their frequency
 Constraint:
 N <= 10^5
 |S| <= 100
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++; //accesses the map m using the string s as the key
    }
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
    return 0;
}