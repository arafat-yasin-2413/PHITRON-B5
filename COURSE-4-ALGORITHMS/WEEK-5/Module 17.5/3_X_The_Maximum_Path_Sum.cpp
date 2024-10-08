#include <bits/stdc++.h>
using namespace std;

int n, m;
int ar[15][15];

int maximumSum(int i, int j)
{
    if (i > n or j > m)
        return INT_MIN;
    if (i == n and j == m)
        return ar[i - 1][j - 1];

    int down = maximumSum(i + 1, j);
    int right = maximumSum(i, j + 1);

    return ar[i - 1][j - 1] + max(down, right);
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }

    cout << maximumSum(1, 1) << endl;

    return 0;
}