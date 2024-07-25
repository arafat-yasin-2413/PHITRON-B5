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

    // cout << v.size() << endl;
    int sz = v.size();

    for (int i = 1; i < sz - 1; i++)
    {
        int left = v[i - 1];
        int right = v[i + 1];
        if (v[i] < left and v[i] < right)
        {
            cout << v[i] << endl;
        }
    }

    return 0;
}