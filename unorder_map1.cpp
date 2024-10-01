/* 1. built-in implementation - hashtable of each key
   2. time complexity - O(1) [less than ordered map]
   3. valid key data types - basic data types only
*/
#include <bits/stdc++.h>
using namespace std;

void display(unordered_map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m) 
    {
        cout << pr.first << " " << pr.second << endl; // access = O(1)
    }
}
int main()
{
    unordered_map<int, string> m;

   // insertion O(1)
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m[5] = "vbv"; // this will replace the previous value
    m.insert({4, "efg"}); //takes pair as parameter
    m[6]; // this also take logn time.

     // search
    auto it = m.find(7); // return iterator. O(1)

    if (it == m.end())
    {
        cout << "No value" << endl;
    }
    else
    {
        cout << it->first << " " << it->second << endl;
    }

    // delete

    m.erase(3); // O(1) -> take key & iterator as parameter
    if(it != m.end()) // avoid sagment fault
    m.erase(it);

   // m.clear(); // delete all elements

    display(m);
    return 0;
}