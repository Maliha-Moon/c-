#include <bits/stdc++.h>
using namespace std;
// vector is a class template, sequence container, dynamic array

void display(vector<int> &myVec)
{
    cout << "Size of vector" << myVec.size() << endl;
    for (int i = 0; i < myVec.size(); i++)
    {
        // myvec.size() -> O(1)
        cout << myVec[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> myVec;
    int element;
    vector<int> myVec1 = {1, 2, 3, 4, 5};
    vector<float> myVec2(3);
    vector<int> vec(3, 4);
    vector<int> vec2(myVec); // copy vector

    // for (int i : myVec1)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // for(int i=0;i<3;i++)
    //  {
    //     myVec2.push_back(i);
    //  }
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element: " << endl;
        cin >> element;
        display(myVec);
        myVec.push_back(element); // push_back() function. Value is passed as parameter
        // vec.push_back() -> O(1)
    }

    // myVec.pop_back(); // does not take parameter. remove the last element

    display(myVec);

    // vector_name.insert(position, value); -> insert value before the element at the specified position
    // position-> specify the iterator(pointer) which points to the position
    vector<int>::iterator iter = myVec.begin();
    // myVec.insert(iter+1, 50);
    myVec.insert(iter + 2, 3, 50);
    // myVec.insert(myVec.begin()+3,500);
      display(myVec);
    return 0;
}