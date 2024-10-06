#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];

int count_subset_sum(int n, int ar[], int W)
{
    if (n == 0)
    {
        if (W == 0)
            return 1;
        else
            return 0;
    }

    if (dp[n][W] != -1)
        return dp[n][W];
    if (ar[n - 1] <= W)
    {
        int op1 = count_subset_sum(n - 1, ar, W - ar[n - 1]);
        int op2 = count_subset_sum(n - 1, ar, W);
        dp[n][W] = op1 + op2;
        return dp[n][W];
    }

    else
    {
        bool op2 = count_subset_sum(n - 1, ar, W);
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

    cout << count_subset_sum(n, ar, W) << endl;

    return 0;
}