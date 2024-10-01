#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q; // FIFO
    q.push("abc");
    q.push("def");
    q.push("ghi");
    q.push("jkl");
    q.push("mno");

    cout << q.size() << endl;
    while (!q.empty())
    {
        cout  << q.front() << endl; // first element
       // cout << "last element: " << q.back() << endl;  // last element
        q.pop();
    }

    return 0;
}