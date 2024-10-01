#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> p = {{1, 2}, {3, 4}, {5, 6}};

   // vector<pair<int, int>>::iterator itr; // iterator of vector<pair<int,int>> / vector of pairs data type
    for (auto itr = p.begin(); itr != p.end(); ++itr)
    {
        cout <<(*itr).first << " " << (*itr).second << endl; // (*itr) is a pair where itr points to a pair
    }
     for (auto itr = p.begin(); itr != p.end(); ++itr)
    {
        cout << (itr->first) << " " << (itr->second) << endl; // use more
    }
   
   // auto tells compiler to determine data type according to initialization

    return 0;
}