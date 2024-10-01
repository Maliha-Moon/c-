/* Given array a of N integers. Given Q queries and in each query given a Number X, print count of that number in array
Constraints:
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
int hashTable[N]; // global array assign to 0
int main()
{
    int n;
    cin >> n;
    int Arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
        hashTable[Arr[i]]++; // Increment the count at the index representing the number
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        // for (int i = 0; i < n; i++)
        // {
        //     if (Arr[i] == x) // TC: O(N) + O(Q*N) = O(N) + O(N^2) = 10^10
        //         ctr++;
        // }
        cout << hashTable[x] << endl; // O(1)
        // TC: O(N) + O(Q) = 2O(N) = 10^5
    }
    return 0;
}