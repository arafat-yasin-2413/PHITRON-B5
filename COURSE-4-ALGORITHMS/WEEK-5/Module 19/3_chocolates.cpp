#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

bool equal_sum_partition(int n, int ar[], int S)
{
    if (n == 0)
    {
        if (S == 0)
            return true;
        else
            return false;
    }
    if(dp[n][S] != -1) 
    return dp[n][S];
    if (ar[n - 1] <= S)
    {
        bool op1 = equal_sum_partition(n - 1, ar, S - ar[n - 1]);
        bool op2 = equal_sum_partition(n - 1, ar, S);
        dp[n][S] = (op1 || op2);
        return dp[n][S];
    }
    else
    {
        bool op2 = equal_sum_partition(n - 1, ar, S);
        dp[n][S] = op2;
        return dp[n][S];
    }
}

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        int ar[n];

        memset(dp, -1, sizeof(dp));

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum += ar[i];
        }

        // cout << sum << endl;
        if (sum % 2 != 0)
            cout << "NO" << endl;
        else
        {
            if (equal_sum_partition(n, ar, sum / 2))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}