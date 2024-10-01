#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++) // starting point
    {
        for (int j = i; j < n; j++) // ending point
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                // cout << arr[k] << " ";
            }
            /* if (sum > max_sum)
             {
                 max_sum = sum;
             } */
            max_sum = max(max_sum, sum);
            // cout << endl;
        }
    }
    cout << max_sum << endl;
    return 0;
}