#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

// https://atcoder.jp/contests/abc382/tasks/abc382_a

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d;
    cin >> n >> d;

    string s;
    cin >> s;

    int found_empty = 0;
    int cookie_found = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            found_empty++;
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (d == 0)
        {
            break;
        }
        if (s[i] == '@')
        {
            cookie_found++;
            d--;
        }
    }

    cout << found_empty + cookie_found << nl;

    return 0;
}