#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
// https://atcoder.jp/contests/abc193/tasks/abc193_a
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b;
    cin >> a >> b;

    double disc_in_money = a - b;
    double res = (disc_in_money * 100.0) / a;
    cout << res << nl;

    return 0;
}
