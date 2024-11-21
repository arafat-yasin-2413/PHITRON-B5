#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
// https://atcoder.jp/contests/abc199/tasks/abc199_a
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin>>a>>b>>c;

    int left = a*a + b*b;
    int right = c*c;

    if(left<right) cout<<"Yes"<<nl;
    else cout<<"No"<<nl;

    return 0;
}