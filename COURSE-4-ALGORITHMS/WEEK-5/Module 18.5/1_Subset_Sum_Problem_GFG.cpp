#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, W;
    cin >> n >> W;

    int ar[n];
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        total += ar[i];
    }

    bool dp[n + 1][W + 1];

    dp[0][0] = true;
    for (int k = 1; k <= W; k++)
    {
        dp[0][k] = false;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (ar[i - 1] <= j)
            {
                bool op1 = dp[i - 1][j - ar[i - 1]];
                bool op2 = dp[i - 1][j];

                dp[i][j] = (op1 || op2);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= W; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout<<dp[n][W]<<endl;

    return 0;
}