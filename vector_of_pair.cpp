//  vector of pairs = containing multiples pair
#include <bits/stdc++.h>
using namespace std;
void display(vector<pair<int, int>> vec)
{
    cout << "Size of vector: " << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << " " << vec[i].second << endl;
    }
}
int main()
{
    vector<pair<int, int>> vec; //={{1,2},{3,4},{5,6}}; // vector of pair. every vector element will have a pair
    display(vec);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        //vec.push_back(make_pair(x,y));
        vec.push_back({x,y});
    }
     display(vec);
}