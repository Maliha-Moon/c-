/* 10 16 7 14 5 3 12 9
deduce the array in a new array
*/
#include <bits/stdc++.h>
using namespace std;

bool mycompare(pair<int,int> p1,pair<int,int> p2)
{
    return p1.first<p2.first;
}
int main()
{
    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};
    vector<pair<int, int>> vec;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
       vec.push_back({arr[i],i});
    }
    sort(vec.begin(),vec.end(), mycompare);
    for(int i=0; i<vec.size();i++)
    {
       // cout << vec[i].first <<"," << vec[i].second << " ";
       arr[vec[i].second]=i;

    }
    for(int i=0; i<vec.size();i++)
    {
       cout << arr[i] <<" ";
    }
    cout << endl;


}