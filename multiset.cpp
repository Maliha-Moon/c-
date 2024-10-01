// set is a collection of unique key elements
#include <bits/stdc++.h>
using namespace std;

void printValue(set<string> &s)
{
    // range-based
    for (string value : s)
    {
        cout << value << endl;
    }
    /* iterator
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << (*it) << endl;
    } */
}
int main()
{
    multiset<string> s; // store in sorted/lexicographical order
    // insert -> log(n)
    s.insert("abc");
    s.insert("zwx");
    s.insert("efd");
    s.insert("hij");
    s.insert("abc");
    // access -> O(log(n))
    auto it = s.find("abc");
    // to avoid segmentation fault
    if (it != s.end())
    {
        cout << (*it) << endl;
        //delete an element
        // s.erase(it);
        // s.erase("efd");
    }
    printValue(s);
}