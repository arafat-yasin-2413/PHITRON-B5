#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];

int knapsack(int n, int wgt[], int val[], int W)
{
    if (n < 0 or W == 0)
        return 0;
    if (dp[n][W] != -1)
        return dp[n][W];
    if (wgt[n - 1] <= W)
    {
        int op1 = knapsack(n - 1, wgt, val, W - wgt[n - 1]) + val[n - 1];
        int op2 = knapsack(n - 1, wgt, val, W);

        return dp[n][W] = max(op1, op2);
    }
    else
    {
        return dp[n][W] = knapsack(n - 1, wgt, val, W);
    }
}

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n, W;
        cin >> n >> W;

        int wgt[n];
        int val[n];

        memset(dp, -1, sizeof(dp));

        for (int i = 0; i < n; i++)
        {
            cin >> wgt[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> val[i];
        }

        cout << knapsack(n, wgt, val, W) << endl;
    }

    return 0;
}