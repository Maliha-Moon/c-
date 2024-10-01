/* Given 2D array a of NxN integers. Given Q queries and in each query given a,b,c and d. print sum of rectangle represented by (a,b) as top left point
 and (c,d) as top bottom right point

Constraints
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a,b,c, d <= N
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int arr[N][N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        long long sum = 0;
        cin >> a >> b >> c >> d;
        for (int i = a; i <= c; i++)
        {
            for (int j = b; j <= d; j++)
            {
                sum += arr[i][j]; // O(N) + O(Q*N^2) = 10^5 * 10^6 = 10^11 > 1 sec
            }
        }
        cout << sum << endl;
    }
    return 0;
}