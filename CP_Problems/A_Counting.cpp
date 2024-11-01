#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int
const double pi = 3.141592653;
void solve()
{
    int a, b;
    cin >> a >> b;

    if (a > b)
        cout << 0 << nl;
    else
        cout << abs(a - b) + 1 << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}