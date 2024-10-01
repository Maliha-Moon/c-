#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p; // pair(keyword)<data_type1,data_type2> pair_name;
    // p = make_pair(2,"moon"); //initialize
    p = {2, "moon"}; // initialize
    // pair<int,string> p1 = p; // copy value
    pair<int, string> &p1 = p; // actual value
    p1.first = 3;
    cout << p.first << " " << p.second << endl;

    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    swap(p_array[0], p_array[2]); 
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    pair<int,string> p3 = {4,"joy"};
    cout << p3.first << " " << p3.second << endl;
    p.swap(p3); //swap two pair
    cout << p.first << " " << p.second << endl;
    cout << p3.first << " " << p3.second << endl;
}