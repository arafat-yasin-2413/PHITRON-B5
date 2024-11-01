#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int
// https://atcoder.jp/contests/abc125/tasks/abc125_a

void solve()
{
    int a,b,t;
    cin>>a>>b>>t;

    cout<<(t/a) * b<<nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}