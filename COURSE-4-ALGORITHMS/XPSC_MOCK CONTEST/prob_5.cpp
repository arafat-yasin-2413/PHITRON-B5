
/*
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
*/

// 5th Solution: Mina and Moni

/*
int findMinDifference(vector<int> &coins, int N)
{
    int totalSum = 0;
    for (int coin : coins)
        totalSum += coin;

    int targetSize = N / 2;     // Target size for one of the subsets
    int halfSum = totalSum / 2; // We want to approach half of the total sum

    // DP table to check possible sums with i coins
    // dp[i][j] will be true if we can achieve sum j using exactly i coins
    vector<vector<bool>> dp(targetSize + 1, vector<bool>(halfSum + 1, false));
    dp[0][0] = true; // 0 coins make a sum of 0

    // Dynamic programming approach to fill the dp table
    for (int coin : coins)
    {
        for (int i = targetSize; i > 0; --i)
        {
            for (int j = halfSum; j >= coin; --j)
            {
                if (dp[i - 1][j - coin])
                {
                    dp[i][j] = true;
                }
            }
        }
    }

    // Now we find the maximum sum that can be achieved with ...
    // exactly targetSize coins
    int bestSum = 0;
    for (int j = 0; j <= halfSum; ++j)
    {
        if (dp[targetSize][j])
        {
            bestSum = j;
        }
    }

    // The other subset sum will be totalSum - bestSum
    int otherSum = totalSum - bestSum;
    return abs(bestSum - otherSum);
}
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int findMinDifference(vector<int> &coins, int N)
{
    int totalSum = 0;
    for (int coin : coins)
        totalSum += coin;

    // Half size constraint
    int halfSum = totalSum / 2;
    int halfSize = N / 2;

    // DP table where dp[j] indicates whether it's possible to form sum j
    // without caring about the number of coins used yet
    vector<vector<bool>> dp(N + 1, vector<bool>(totalSum + 1, false));

    dp[0][0] = true; // We can always make sum 0 with 0 coins

    // Fill the dp table
    for (int coin : coins)
    {
        // Traverse in reverse to ensure each coin is only considered once
        for (int i = N; i >= 1; --i)
        {
            for (int j = totalSum; j >= coin; --j)
            {
                dp[i][j] = dp[i][j] || dp[i - 1][j - coin];
            }
        }
    }

    // We need to split into two groups: halfSize coins for each sister
    int bestSum = 0;
    for (int j = 0; j <= halfSum; j++)
    {
        if (dp[halfSize][j])
        { // Only consider subsets of size halfSize
            bestSum = j;
        }
    }

    // The other subset sum will be totalSum - bestSum
    int otherSum = totalSum - bestSum;
    return abs(bestSum - otherSum);
}

int main()
{
    int T;
    cin >> T; // Number of test cases

    while (T--)
    {
        int N;
        cin >> N; // Number of coins

        vector<int> coins(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> coins[i];
        }

        // Find and print the minimum difference for the current test case
        cout << findMinDifference(coins, N) << endl;
    }

    return 0;
}
