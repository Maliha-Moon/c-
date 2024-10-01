#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    for(int i : vec) //range based loop
    {
       i++; //do not change actual value cz it access copy of the value. not actual value
    }
    for(int i : vec) 
    {
        cout <<i<<" ";  
    }
    cout<<endl;
     for(int &i : vec) //refernce loop can change actual value. access actual value
    {
        i++;  
    }
    for(int i : vec) 
    {
        cout <<i<<" "; 
    }
    
    cout<<endl;
    return 0;
}