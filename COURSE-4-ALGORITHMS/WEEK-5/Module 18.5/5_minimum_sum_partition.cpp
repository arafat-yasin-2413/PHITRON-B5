#include <bits/stdc++.h>
using namespace std;

int main()
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

    bool dp[n + 1][sum + 1];
    dp[0][0] = true;
    for (int k = 1; k <= sum; k++)
    {
        dp[0][k] = false;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
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

    vector<int> v;
    for (int i = 0; i <= sum; i++)
    {
        if(dp[n][i] == true)
        {
            v.push_back(i);
        }
    }


    int ans = INT_MAX;

    for (int child : v)
    {
        // cout << child << endl;
        int s1 = child;
        int s2 = sum-s1;
        ans = min(ans,abs(s1-s2));
    }

    cout<<ans<<endl;

    return 0;
}