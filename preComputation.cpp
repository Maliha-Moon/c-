/* Precomputation refers to the process of pre-calculating and storing the results of certain computations or data structures in advance,
 in order to speed up the execution time of a program. This can be useful in situations where the same calculations or data structures 
 are needed multiple times, as it avoids the need to recalculate them every time.
*/
#include <bits/stdc++.h>
using namespace std;
/*  print Factorial for each test case % M where M = 10^9+7
    Constraints:
    1 <= N <= 10^5
    1 <= T <= 10^5
*/
const int M = 1e9 + 7;
const int N = 1e5+10;
long long fact[N];
int main()
{
    fact[0] = fact[1] = 1;
    for(int i=2; i<N; ++i){
        fact[i] = fact[i-1]*i; // ith factorial
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // for (int i = 2; i <= n; i++)
        // {
        //     fact = ((fact % M) * (i % M)) % M;
        // } // TC: O(t*n) = O(n^2) = 10^10 > 1 sec -> TLE
        cout << fact[n] << endl;
        // O(N)+O(T) = 2O(N) = 10^5
    }
    return 0;
}