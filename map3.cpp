#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> name,name2,name3;
    // each element is a pair
    // key works as index
    name.insert({1, "moon"});
    name.insert({7, "joy"});
    name.insert({6, "joy"});
    name[7] = "Joy";
    name[5] = "ayan";

    name3[10] = "Maliha";
    name3[12] = "Rayhan";
    name[9] = "Arnob";

    // user input
    int num;
    string s;
    cin >> num >> s;
    name.insert({num, s});

    // [] operator
    cout << name[1] << endl;
    // .at()
    cout << name.at(7) << endl;
    
    // swap
    swap(name,name3);

     // iterate
    for (auto &p : name)
    {
        // store in sorted and lexicographical order of key
        cout << p.first << " " << p.second << endl;
    }

    // search an element
       auto it = name.find(1);
    // delete an element -> take key as parameter
    // auto it = name[7];  // it store the value associated with key
    // auto it = &name[7]; // it store the address of the associated value
    name.erase(6);
    name.erase(it);

    // count -> It returns 1 if the key is present in the container as the map only contains a unique key.
    //          It returns 0 if the key is not present in the map container.
    int cnt = name.count(10);
    cout << "Count = " << cnt << endl;
    
    // assign=
    //   name2 = name;
    //    for (auto &p2 : name)
    // {
    //     // store in sorted and lexicographical order of key
    //     cout << p2.first << " " << p2.second << endl;
    // }

    // size
    cout << "Size of map: " << name.size() << endl;
    // max_size
    cout << "Maximum Size of map: " << name.max_size() << endl;

    // delete all elements
    // name.clear();

    // emptyfunction
    if (name.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not empty" << endl;
    }

    // lower bound -> pointing to the key which is equivalent to the key passed in the parameter.
    // if passed key is not present then lower_bound will return immediate next(greatest) element
    auto itr = name.lower_bound(4);
    cout << "Lower bound: " << itr->first << " " << itr->second << endl;

    // upper bound -> return iterator pointing to the next element which is greater than passed key
    auto itr2 = name.upper_bound(2);
    cout << "Upper bound: " << itr2->first << " " << itr2->second << endl;

    map<string, int> map2;
    map2["abc"] = 10;
    map2["edf"] = 20;
    for (auto &p : map2)
    {
        // store in sorted and lexicographical order of key
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}