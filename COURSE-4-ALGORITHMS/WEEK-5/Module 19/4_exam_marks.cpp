#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n,M;
        cin >> n >> M;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int W = 1000 - M;
        int dp[n + 1][W + 1];
        dp[0][0] = true;

        for (int j = 1; j <= W; j++)
        {
            dp[0][j] = false;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= W; j++)
            {
                if (ar[i - 1] <= j)
                {
                    bool op1 = dp[i - 1][j - ar[i - 1]];
                    bool op2 = dp[i - 1][j];
                    dp[i][j] = op1 or op2;
                }
                else
                {
                    bool op2 = dp[i - 1][j];
                    dp[i][j] = op2;
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

        if (dp[n][W])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}