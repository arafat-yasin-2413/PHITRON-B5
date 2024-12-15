#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

// https://codeforces.com/contest/2044/problem/B

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        string res;
        for (int i = s.size()-1; i >=0; i--)
        {
            if (s[i] == 'p')
            {
                res += "q";
            }
            else if (s[i] == 'q')
            {
                res += "p";
            }
            else
            {
                res += "w";
            }
        }

        cout << res << nl;
    }

    return 0;
}