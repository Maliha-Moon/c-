#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a+2,a+n); //sor[start_address, end_address)
    // take address as parameter
    // end_address = next contiguous location of the last element
    // a = [0] -> points to the 0th index
    // a+n -> add n with 0th index address
    // a+2 -> 0th index address + 2 = 2nd index address
    // N*log(N)
    /* This function internally uses IntroSort. In more details it is implemented using hybrid of QuickSort, HeapSort and InsertionSort.By default, 
    it uses QuickSort but if QuickSort is doing unfair partitioning and taking more than N*logN time, it switches to HeapSort and
     when the array size becomes really small, it switches to InsertionSort. 
    */
     for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }

    vector<int> vec;
    int size;
    cin >> size;
    for(int i=0;i<size;i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
     for(int i=0;i<size;i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}