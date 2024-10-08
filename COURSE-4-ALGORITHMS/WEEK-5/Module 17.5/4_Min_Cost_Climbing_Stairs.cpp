#include <bits/stdc++.h>
using namespace std;

int dp[1005];

int knapsack(int n, int ar[])
{
    if (n < 0)
        return 0;
    if (n == 0 or n == 1)
        return ar[n-1];
    if (dp[n] != -1)
        return dp[n];

    int op1 = knapsack(n - 1, ar);
    int op2 = knapsack(n - 2, ar);

    dp[n] = min(op1, op2) + ar[n - 1];
    return dp[n];
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

    memset(dp, -1, sizeof(dp));
    return 0;
}