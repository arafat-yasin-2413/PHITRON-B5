#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int sum = 0;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }

    bool dp[n + 1][sum + 1];
    dp[0][0] = true;

    for (int i = 1; i <= sum; i++)
    {
        dp[0][i] = false;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (ar[i - 1] <= j)
            {
                bool op1 = dp[i - 1][j - ar[i - 1]];
                bool op2 = dp[i - 1][j];
                dp[i][j] = (op1 or op2);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    vector<int> vec;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (dp[i][j] == 1)
            {
                vec.push_back(j);
            }
        }
    }

    int res = INT_MAX;
    for (int el : vec)
    {
        cout << el << " ";
        int s1 = el;
        int s2 = sum - s1;
        res = min(res, abs(s1 - s2));
    }

    cout << res << endl;

    return 0;
}