/* binary predicate.
The comparator function generally takes two parameters (values to compare) of same data type and returns a boolean value based on their comparison.
*/
#include <bits/stdc++.h>
using namespace std;
// bool shouldI_swap(int a, int b) //comparator function
// {
//       if(a<b) return true;
//       else
//       return false;
// }

bool cmp(pair<int, int> a, pair<int, int> b) // comparator function
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
       
    // if (a > b)
    //     return true;
    // else
    //     return false;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        // cin >> vec[i].first >> vec[i].second;
        vec.push_back({x, y});
    }
    // sorting algo -> changes in comparator function does not change sorting algorithm
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (shouldI_swap(vec[i], vec[j]))
    //             swap(vec[i], vec[j]);
    //     }
    // }

    // in built sort function -> third parameter = comparator function [by default ascending order]
    sort(vec.begin(), vec.end(), cmp);

    for (int i = 0; i < n; i++)
    {
        cout << vec[i].first << "," << vec[i].second << " ";
    }
    return 0;
}