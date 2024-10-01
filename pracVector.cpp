#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &vec)
{
    // cout << "Size of vector: " << vec.size() << endl;

    for (int i = 0; i < vec.size(); i++)
    {
        // cout << "Number of column in " << i+1 <<"th row is " << arr.size() << endl;
        cout << vec[i] << " ";
    }
    cout << endl;
}
int main()
{
    // vector of vector
    vector<vector<int>> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        vector<int> vec1;
        for (int j = 0; j < size; j++)
        {
            int x;
            cin >> x;
            vec1.push_back(x);
        }
        vec.push_back(vec1);
    }
    for (int i = 0; i < n; i++)
    {
        display(vec[i]);
    }

    return 0;
}