// 2D vector / dynamic array / dynamic matrix
// number of rows & columns can be anything.
// Each index of vector stores a vector
#include <bits/stdc++.h>
using namespace std;
void display(vector<int> &v)
{
    cout << "Size of vector: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int N;
    cin >> N;                // number of vectors
    vector<vector<int>> vec; // 2D vector
    //vector<vector<vector<int>>> vec2; //3D vector, vector of vectors of vectors
    //vector<vector<pair<int,float>>> vec3;  // vector of vectors of pairs
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n; // size of each vector
        //vec[0] = 0
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x); // a vector storing element
        }
        vec.push_back(temp); // vector storing another vector
    }
    vec[0].push_back(10);
    vec.push_back(vector<int> ());// an empty vector 
    for (int i = 0; i < vec.size(); i++) // a vector
    {
        display(vec[i]);
    }
}