#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/contest/855/problem/A

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    map<string,int> mp;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;

        if(mp[s] == 0)
        {
            cout<<"NO"<<nl;
        }
        if(mp[s] >= 1)
        {
            cout<<"YES"<<nl;
        }
        mp[s]++;

    }

    return 0;
}