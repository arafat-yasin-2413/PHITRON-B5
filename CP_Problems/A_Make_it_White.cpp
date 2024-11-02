#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/problemset/problem/1927/A

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int left_idx = -1;
        int right_idx = -1;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                left_idx = i;
                break;
            }
        }

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                right_idx = i;
                break;
            }
        }

        cout << abs(left_idx - right_idx) + 1 << nl;
    }

    return 0;
}