#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://atcoder.jp/contests/abc072/tasks/abc072_b

void solve()
{
    string s;
    cin>>s;

    int sz = s.size();
    // cout<<sz<<nl;

    string res;
    for(int i=0; i<sz; i++)
    {
        if(i%2 == 0)
        {
            res+=s[i];
        }
    }

    cout<<res<<nl;

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();    

    return 0;
}