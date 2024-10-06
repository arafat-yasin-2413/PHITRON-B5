#include <bits/stdc++.h>
using namespace std;

const int maxN = 1000;
const int maxW = 1000;
int dp[maxN][maxW];

/*
    weight: 2 3 4 5
    value : 1 3 5 3
    W : 8 kg
*/

int knap(int n, int weight[], int value[], int W)
{
    if (n == 0 or W == 0)
        return 0;
    if (dp[n][W] != -1)
        return dp[n][W];
    if (weight[n - 1] <= W)
    {
        int op1 = knap(n - 1, weight, value, W - weight[n - 1]) + value[n - 1];
        int op2 = knap(n - 1, weight, value, W);
        dp[n][W] = max(op1, op2);
        return dp[n][W];
    }

    else
    {
        int op2 = knap(n - 1, weight, value, W);
        dp[n][W] = op2;
        return dp[n][W];
    }
}

int main()
{
    int n;
    cin >> n;

    int weight[n], value[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }

    int W;
    cin >> W;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << knap(n, weight, value, W) << endl;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if(dp[i][j] == -1)
            {
                cout<<"X"<<" ";
            }
            else 
            {
                cout<<dp[i][j]<<" ";
            }
        }
        cout << endl;
    }

    return 0;
}