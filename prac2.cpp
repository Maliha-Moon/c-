//comperative function
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>vec)
{
    return vec.first>
}
int main()
{
    int array []={7,2,10,4,8,1,9,13,5};
    int n = sizeof(array)/sizeof(array[0]);
    vector<pair<int,int>> vec;
    for(int i=0; i<n; i++)
    {
        vec.push_back({array[i],i});
    }

    sort(array,array+n,cmp);
    
    return 0;
}