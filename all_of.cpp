#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {-2, -1, -6};
    // all_of, any_of, none_of function returns true or false
    cout << all_of(vec.begin(), vec.end(), [](int x)
                   { return x > 0; })
         << endl; // if all of them match with the condition

    cout << any_of(vec.begin(), vec.end(), [](int x)
                   { return x > 0; })
         << endl; // if any of them match with the condition

    cout << none_of(vec.begin(), vec.end(), [](int x)
                    { return x > 0; })
         << endl; // if none of them match with the condition

         // TC: O(n)
    return 0;
}