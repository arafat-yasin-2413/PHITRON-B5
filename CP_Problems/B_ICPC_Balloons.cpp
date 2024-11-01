#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/problemset/problem/1703/B

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        // cout << s << endl;

        int freq[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 65]++;
        }

        int balloons = 0;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                balloons += 2;
                freq[i] -= 1;
                if (freq[i] > 0)
                {
                    balloons += freq[i];
                    freq[i] = 0;
                }
            }
        }

        cout << balloons << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}