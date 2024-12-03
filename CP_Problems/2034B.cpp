#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

// https://codeforces.com/contest/2034/problem/B

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {

        int n, m, k;
        cin >> n >> m >> k;

        string s;
        cin >> s;

        int cnt = 0;
        int zeroCount = 0;
        int consecutive = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                zeroCount++;
            }
            if (s[i] == '0')
            {
                cnt++;
                if (cnt == m)
                {
                    consecutive++;
                }
            }

            else if (s[i] == '1')
            {
                cnt = 0;
            }
        }

        // cout << zeroCount << nl;
        // cout<<"consecutive = "<<consecutive<<nl;

        if (consecutive == 0)
            cout << 0 << nl;
        else if (consecutive == 1)
            cout << m / k << nl;
        else
        {
            cout << zeroCount / k << nl;
        }
    }

    return 0;
}