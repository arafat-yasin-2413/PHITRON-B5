#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int ar[n];
    long long int pre[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    pre[0] = ar[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + ar[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << pre[i] << " ";
    // }
    // cout << endl;

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0)
        {
            cout << pre[r] << endl;
        }
        else
        {
            cout << pre[r] - pre[l - 1] << endl;
        }
    }

    return 0;
}