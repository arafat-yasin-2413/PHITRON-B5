#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        // int x;
        // cin>>x;
        // v.push_back(x);
    }

    vector<int> pref(n);
    pref[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + v[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << pref[i] << " ";
    // }
    // cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << pref[n - 1] - pref[i] << " ";
    }
    cout << endl;

    return 0;
}