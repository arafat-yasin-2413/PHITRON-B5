#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://atcoder.jp/contests/abc150/tasks/abc150_b

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int sz = s.size();

    int cnt = 0;
    for (int i = 0; i < sz; i++)
    {
        int x = i;
        int y = i + 1;
        int z = i + 2;

        if (x <= sz and y <= sz and z <= sz)
        {
            if (s[x] == 'A' and s[y] == 'B' and s[z] == 'C')
            {
                cnt++;
            }
        }

    }
    
    cout << cnt << nl;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}