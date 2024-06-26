#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> v1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v1.push_back(a[i]);
    }

    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int x;
    cin>>x;

    v1.insert(v1.begin() + x, b, b + m);

    // for (int val : v1)
    // {
    //     cout << val << " ";
    // }

    int res[n+m];
    for(int i=0; i<n+m; i++)
    {
        res[i] = v1[i];
    }

    for(int val:res)
    {
        cout<<val<<" ";
    }



    return 0;
}