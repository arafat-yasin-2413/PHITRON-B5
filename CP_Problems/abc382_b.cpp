#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

// https://atcoder.jp/contests/abc382/tasks/abc382_b

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

https: // atcoder.jp/contests/abc382/tasks/abc382_b

    int n, d;
    cin >> n >> d;

    string s;
    cin >> s;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (d == 0)
        {
            break;
        }
        if (s[i] == '@')
        {
            d--;
            s[i] = '.';
        }
    }

    cout << s << nl;

    return 0;
}