#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BIN_BAT

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int x = 1;
        int cnt = 1;

        while (x <= n)
        {
            x = 2 * x;
            if (x == n)
                break;
            cnt++;
        }

        // cout<<cnt<<nl;
        int round = cnt;

        cout << round * a + (round - 1) * b << nl;
    }

    return 0;
}