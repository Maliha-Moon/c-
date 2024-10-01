/* Given array a of N integers. Given Q queries and in each query given L and R. print sum of array elements from index L to R(L, R included)
Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int prefix_sum[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        prefix_sum[i] = prefix_sum[i-1]+a[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int L, R;
        long long  sum = 0; // as N <= 10^5 & a[i] <= 10^9
        cin >> L >> R;
        // for (int i = L; i <= R; i++)
        // {
        //     sum = sum + a[i]; // TC: O(N) + O(Q*N) = 10^10 > 1 sec
        // }
        cout << prefix_sum[R]-prefix_sum[L-1] << endl;
        // O(N) = 10^5
    }
    return 0;
}