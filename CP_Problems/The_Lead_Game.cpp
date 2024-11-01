#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define pr pair<int,int> 

// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TLG


class cmp
{
    public:
        bool operator()(pr a, pr b)
        {
            return a.first > b.first;
        }
};


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin>>n; 
    
    vector<pr> v1;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        v1.push_back({a,b});
    }

    int pl=-1, lead=0;

    // for(auto el:v1)
    // {
    //     cout<<el.first<<"  "<<el.second<<nl;
    // }

    vector<pr> v2;

    if(v1[0].first > v1[0].second)
    {
        pl = 1;
    }
    else if(v1[0].second > v1[0].first)
    {
        pl = 2;
    }
    lead = abs(v1[0].first - v1[0].second);

    v2.push_back({lead,pl});

    for(int i=1; i<n; i++)
    {

        v1[i].first = v1[i-1].first + v1[i].first;
        v1[i].second = v1[i-1].second + v1[i].second;

        // cout<<"val1 = "<<v1[i].first<<", "<<"val2 = "<<v1[i].second<<nl;

        if(v1[i].first > v1[i].second) 
        {
            pl = 1;
        }
        else if(v1[i].second > v1[i].first)
        {
            pl = 2 ;
        }
        lead = abs(v1[i].first-v1[i].second);
        v2.push_back({lead,pl});
    }

    sort(v2.begin(),v2.end(),cmp());

    // for(auto el: v2)
    // {
    //     cout<<el.first<<"  "<<el.second<<endl;
    // }

    cout<<v2[0].second<<" "<<v2[0].first<<nl;

    return 0;
}