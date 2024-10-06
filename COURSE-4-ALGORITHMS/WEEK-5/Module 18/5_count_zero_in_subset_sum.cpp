#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];

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

    dp[0][0] = true;
    for (int j = 1; j <= W; j++)
    {
        dp[0][j] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (ar[i - 1] <= j)
            {
                int op1 = dp[i - 1][j - ar[i - 1]];
                int op2 = dp[i - 1][j];

                dp[i][j] = op1 + op2;
            }
            else
            {
                int op2 = dp[i - 1][j];
                dp[i][j] = op2;
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}