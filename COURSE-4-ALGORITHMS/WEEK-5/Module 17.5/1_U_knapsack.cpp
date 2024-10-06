#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int wgt[], int val[], int W)
{
    if (n == 0 or W == 0)
        return 0;
    if (wgt[n - 1] <= W)
    {
        int op1 = knapsack(n - 1, wgt, val, W - wgt[n - 1]) + val[n - 1];
        int op2 = knapsack(n - 1, wgt, val, W);
        return max(op1, op2);
    }
    else
    {
        int op2 = knapsack(n - 1, wgt, val, W);
        return op2;
    }
}

int main()
{
    int n, W;
    cin >> n >> W;
    int wgt[n];
    int val[n];

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        wgt[i] = a;
        val[i] = b;
    }
    cout << knapsack(n, wgt, val, W) << endl;

    return 0;
}