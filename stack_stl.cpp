#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s; // LIFO
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Size = " << s.size() << endl;
    // pop operation and print top
    while (!s.empty()) // O(N)
    {
        cout << s.top() << endl;
        s.pop();
    }

    // TC: O(1) for in-built function

    return 0;
}