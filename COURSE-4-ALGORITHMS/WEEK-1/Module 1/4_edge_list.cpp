#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    // pair<int,int> ar[e];
    vector<pair<int, int>> v;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        // v.push_back(make_pair(a,b));
        v.push_back({a, b});
    }

    // printing the edge list
    // for (int i = 0; i < v.size(); i++)
    // {
    //     // cout << i << " : ";
    //     cout << "(" << v[i].first << "," << v[i].second << ")" << endl;
    // }

    for(pair<int,int> pr: v)
    {
        cout << "(" << pr.first << "," << pr.second << ")" << endl;
    }

    // for(auto element: v)
    // {
    //     cout << "(" << element.first << "," << element.second << ")" << endl;
    // }

    return 0;
}