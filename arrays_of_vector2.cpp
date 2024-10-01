#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A[3];
    // first row= first vector
    A[0].push_back(1);
    A[0].push_back(2);
    A[0].push_back(3);
    // 2nd row= 2nd vector
    A[1].push_back(4);
    A[1].push_back(5);
    A[1].push_back(6);
    A[1].push_back(7);
    // 2nd row= 2nd vector
    A[2].push_back(8);
    A[2].push_back(9);

    for (int i = 0; i < 3; i++)
    {
        cout << "Number of columns in row " << (i + 1) << " is " << A[i].size() << endl;
        for (int j = 0; j < A[i].size(); j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}