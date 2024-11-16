#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://atcoder.jp/contests/abc380/tasks/abc380_b

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    // cout<<s<<endl;

    int sz = s.size();
    // cout<<sz<<endl;

    int cnt = 0;
    vector<int>v;

    for(int i = 1; i<sz; i++)
    {
        if(s[i] == '-')
        {
            cnt++;
        }
        else if(s[i] == '|')
        {
            v.push_back(cnt);
            cnt=0;
        }

    }

    for(int el:v)
    {
        cout<<el<<" ";
    }
    cout<<endl;



    return 0;
}