#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {

        int n;
        cin >> n;

        int ar[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum += ar[i];
        }

        if (sum % 2 != 0)
            cout << "NO" << endl;

        else
        {
            int S = sum / 2;
            int dp[n + 1][S + 1];
            dp[0][0] = true;
            for (int k = 1; k <= S; k++)
            {
                dp[0][k] = false;
            }

            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= S; j++)
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
            //     for (int j = 0; j <= S; j++)
            //     {
            //         cout << dp[i][j] << " ";
            //     }
            //     cout << endl;
            // }

            if (dp[n][S])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}