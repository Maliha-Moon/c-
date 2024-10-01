// built-in implementation - comparison based
// store key-value pair. key is a unique value
// by default order map -> store value in sorted order
// string store in lexicographical order (dictionary order)
// non continuous memory location
// key can be any data types including complex type
#include <bits/stdc++.h>
using namespace std;

void display(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m) // nlogn = n size, logn access
    {
        cout << pr.first << " " << pr.second << endl; // access = O(logn)
    }
}
int main()
{
    map<int, string> m;

    // insertion = O(log(N)) ; N=size of map
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m[5] = "vbv"; // this will replace the previous value
    m.insert({4, "efg"}); //takes pair as parameter
    m[6]; // this also take logn time.

   // m["abcd"] = "abcd" // s.size()*logn -> dependes on key data type & key size

    // map<int, string>::iterator it;
    // for (it = m.begin(); it != m.end(); ++it)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    // search
    auto it = m.find(7); // return iterator. O(log(n))

    if (it == m.end())
    {
        cout << "No value" << endl;
    }
    else
    {
        cout << it->first << " " << it->second << endl;
    }

    // delete

    m.erase(3); // O(log(n)) -> take key & iterator as parameter
    if(it != m.end()) // avoid sagment fault
    m.erase(it);

    m.clear(); // delete all elements

    display(m);
    return 0;
}