#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://atcoder.jp/contests/abc214/tasks/abc214_b

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, t;
    cin >> s >> t;

    int cnt = 0;
    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            for (int k = 0; k <= s; k++)
            {
                if (i + j + k <= s and (i * j * k) <= t)
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << nl;
    

    return 0;
}