// O(n)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    for (int i = 0; i < 6; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int min = *min_element(vec.begin() + 3, vec.end()); // min_element(vec.begin(),vec.end()) retrun an iterator/pointer. * derefernce & return value
    cout << min << endl;

    int max = *max_element(vec.begin(), vec.end());
    cout << max << endl;

    int sum = accumulate(vec.begin(), vec.end(), 0); // return sum of all values between [first,last) range. 0 = initial value of sum
    cout << sum << endl;

    int ct = count(vec.begin() + 1, vec.end(), 3); // returns count of elements
    cout << ct << endl;

    auto it = find(vec.begin(), vec.end(), 4);
    cout << *it << endl;

    // reverse element
    reverse(vec.begin(), vec.end());
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;
    reverse(vec.begin() + 2, vec.begin() + 6); // reverse particuler portion
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << endl;

    // reverse string
    string word = "abcdefghijk";
    reverse(word.begin() + 1, word.end());
    cout << word << endl;

    return 0;
}