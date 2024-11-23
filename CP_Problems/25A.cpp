#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/contest/25/problem/A

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ar[n];
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    if (even > odd)
    {
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 != 0)
            {
                cout << i + 1 << nl;
                break;
            }
        }
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 == 0)
            {
                cout << i + 1 << nl;
                break;
            }
        }
    }

    return 0;
}