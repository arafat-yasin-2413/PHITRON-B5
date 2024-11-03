#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/contest/2036/problem/B

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v;
        for (int i = 0; i < k; i++)
        {
            int a, b;
            cin >> a >> b;

            v.push_back(b);
        }

        int sum = 0;
        sort(v.begin(), v.end(),greater<int>());

        // for (auto el : v)
        // {
        //     cout << el << " ";
        // }
        // cout << endl;

        int sz = v.size();
        int kx = min(n, sz);
        for (int j = 0; j < kx; j++)
        {
            sum += v[j];
        }

        cout << sum << nl;
    }

    return 0;
}