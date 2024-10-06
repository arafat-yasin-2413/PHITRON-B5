#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];

bool subset_sum(int n, int ar[], int W)
{
    if (n == 0)
    {
        if (W == 0)
            return true;
        else
            return false;
    }

    if (dp[n][W] != -1)
        return dp[n][W];
    if (ar[n - 1] <= W)
    {
        bool op1 = subset_sum(n - 1, ar, W - ar[n - 1]);
        bool op2 = subset_sum(n - 1, ar, W);
        dp[n][W] = op1 or op2;
        return dp[n][W];
    }

    else
    {
        bool op2 = subset_sum(n - 1, ar, W);
        dp[n][W] = op2;
        return dp[n][W];
    }
}

int main()
{
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int W;
    cin >> W;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            dp[i][j] = -1;
        }
    }

    if (subset_sum(n, ar, W))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}