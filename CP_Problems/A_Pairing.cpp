#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://atcoder.jp/contests/abc378/tasks/abc378_a

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);

    map<int,int>mp;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    mp[d]++;

    int op = 0;
    for(auto el: mp)
    {
        op += el.second/2;
    }

    cout<<op<<endl;


    
    

    return 0;
}