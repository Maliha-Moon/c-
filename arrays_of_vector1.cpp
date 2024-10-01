//  two-dimensional matrices or arrays where the number of columns can be anything, but the number of rows is fixed.
//  Since each row represents one vector and one vector can have any number of elements, each row can have any number of columns.
// Each index of array stores a vector
#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &arr)
{
    cout << "Size of vector: " << arr.size() << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl; //only print vector
    }
}
int main()
{
    int N; // number of vectors(rows of array)
    cin >> N;
    // vector<data_type> Array_name[size_of_array];
    vector<int> Arr[N]; // Arr is a Array of N size. the data type of the array is a vector.
    for (int i = 0; i < N; ++i)
    {
        int n; // size of each vector
        cin >> n;
        for(int j=0; j<n; j++)
        {
            int x; 
            cin >> x;
            Arr[i].push_back(x);
        }

    }

  for(int i=0; i<N; i++)
    {
         display(Arr[i]); //print arrays of vector
    }

   
}
