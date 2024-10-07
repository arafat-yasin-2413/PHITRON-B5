#include <bits/stdc++.h>
using namespace std;
int dp[100007];
int x;

bool make_it(int n)
{
    if (n > x)
        return false;
    if (dp[n] != -1)
        return dp[n];
    if (n == x)
        return true;
    bool op1 = make_it(n + 3);
    bool op2 = make_it(n * 2);
    dp[n] = (op1 || op2);
    return dp[n];
}

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        cin >> x;
        memset(dp, -1, sizeof(dp));
        if (make_it(1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}