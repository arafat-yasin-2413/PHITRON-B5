#include <bits/stdc++.h>
using namespace std;

/*
    weight: 2 3 4 5
    value : 1 3 5 3
    W : 8 kg
*/

int knap(int n, int weight[], int value[], int W)
{
    if (n < 0 or W == 0)
        return 0;
    if (weight[n] <= W)
    {
        int op1 = knap(n - 1, weight, value, W - weight[n]) + value[n];
        int op2 = knap(n - 1, weight, value, W);
        return max(op1, op2);
    }

    else
    {
        int op2 = knap(n - 1, weight, value, W);
        return op2;
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

    cout << knap(n - 1, weight, value, W) << endl;

    return 0;
}