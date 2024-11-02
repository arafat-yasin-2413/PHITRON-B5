#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/contest/44/problem/A

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin>>t;
    cin.ignore();

    set<string>st;

    while(t--)
    {

        string s;
        getline(cin,s);
        st.insert(s);
        
    }

    // for (auto el: st)
    // {
    //     cout<<el<<endl;
    // }
    cout<<st.size()<<endl;


    return 0;
}