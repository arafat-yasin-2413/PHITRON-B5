#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll dp[10008];

ll knapsack_farida(int n, int ar[])
{
    if (n <= 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int op1 = knapsack_farida(n - 2, ar) + ar[n - 1];
    int op2 = knapsack_farida(n - 1, ar);
    dp[n] = max(op1, op2);
    return dp[n];
}

int main()
{
    int t;
    cin >> t;

    for (int k = 1; k <= t; k++)
    {
        int n;
        cin >> n;
        int ar[n];

        memset(dp, -1, sizeof(dp));

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        // cout << knapsack_farida(n, ar) << endl;
        cout << "Case " << k << ": " << knapsack_farida(n, ar) << endl;
    }

    return 0;
}