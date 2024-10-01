// iterator = points to the element of container.
//  pointer-like object representing an element's position in a container
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    // container :: iterator(keyword) iterator_name;
    vector<int>::iterator it = vec.begin(); // points to the first element
    // iterator of vector<int> / vector data type
    cout << (*it) << endl;                  // print value
    cout << ((*it) + 1) << endl;            // continuous memory

    // print vector(continuous memory) using iterator
    for (it = vec.begin(); it != vec.end(); ++it)
    {
        cout << (*it) << endl;
    }
    // The auto keyword automatically detects the data type of a variable by its initialization
    //auto = Good use of auto is to avoid long initializations when creating iterators for containers
    for(auto it=vec.begin(); it != vec.end(); it++)
    {
        cout << (*it) << endl;
    }
    return 0;
}