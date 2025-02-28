// when only need to check if the element is present or not
/* Given N strings and Q queries. In each query you are given a string print yes if string is present else print no
N <= 10^6
|S| <= 100
Q <= 10^6
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str); // O(1)
    }
    int q;
    cin >> q;
    while (q--)
    {
        string str;
        cin >> str;
        if (s.find(str) == s.end()) // O(1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}