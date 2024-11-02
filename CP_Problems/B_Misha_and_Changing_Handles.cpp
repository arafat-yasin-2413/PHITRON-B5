#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/problemset/problem/501/B

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<pair<string, string>> v;

    map<string, int> mp;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        v.push_back({a, b});
        mp[a]++;
        mp[b]++;
        // cout << a << " " << b << endl;
    }

    int sz = v.size();
    vector<pair<string, string>> res;
    for (int i = 0; i < sz; i++)
    {
        cout<<mp[v[i].first]<<" "<<mp[v[i].second]<<endl;
        if (mp[v[i].first] == 1 and mp[v[i].second] == 1)
            res.push_back({v[i].first, v[i].second});
    }

    // for (int i = 0; i < sz - 1; i++)
    // {
    //     for (int j = i + 1; j < sz; j++)
    //     {

    //         if (v[i].second == v[j].first)
    //         {
    //             if (mp[v[i].first] != mp[v[i].second])
    //                 res.push_back({v[i].first, v[j].second});
    //         }
    //     }
    // }

    cout << res.size() << endl;
    for (auto el : res)
    {
        cout << el.first << " " << el.second << endl;
    }

    // for(auto el: mp)
    // {
    //     cout<<el.first<<" : "<<el.second<<endl;
    // }

    return 0;
}