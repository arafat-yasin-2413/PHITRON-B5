#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

// https://codeforces.com/contest/2034/problem/A

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int starting = min(a, b);

        int result = 0;
        for (int i = starting;; i++)
        {
            if ((i % a) == (i % b))
            {
                result = i;
                break;
            }
        }

        cout << result << nl;
    }

    return 0;
}