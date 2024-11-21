#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

// https://atcoder.jp/contests/abc124/tasks/abc124_a

void solve()
{
    int a, b;
    cin >> a >> b;

    int p, q, r, s;
    p = a, q = b, r = a, s = b;

    // pressing same button twice(the maximum button)
    int val1 = 0;
    int mx = max(p, q);
    val1 += mx;
    mx -= 1;
    val1 += mx;

    // cout << val1 << nl;

    // 2 ta button kei 1 bar kore press kori
    int val2 = 0;
    val2+= r;
    r-=1;
    val2+=s;
    s-=1;

    cout<<max(val1,val2)<<nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}