#include <bits/stdc++.h>
using namespace std;

// void display(vector<int> vec) // O(n). cz it copy value
void display(vector<int> &vec) // actual value
{
    cout << "Size of vector: " << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    //vec.push_back(2);
    cout << endl;
}
int main()
{
    vector<int> vec(10, 3);
    display(vec);
    vec.push_back(7); // fill value at the end
    vec.push_back(8);
    display(vec);
    vec.pop_back(); // remove from the end
    display(vec);

    // we cannot copy one array to another. only copy pointer of array

    //vector<int> vec1 = vec; // copy vector->O(n)
     vector<int> &vec1 = vec; //actual value
    vec1.push_back(5);
    display(vec);
    display(vec1);
    return 0;
}