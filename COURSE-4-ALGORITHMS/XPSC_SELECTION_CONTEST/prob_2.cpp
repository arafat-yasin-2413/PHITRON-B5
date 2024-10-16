#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// 2. perfect balancer
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    ll ar[n];

    ll pref[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    //

    pref[0] = ar[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + ar[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << pref[i] << " ";
    // }

    vector<pair<ll, int>> vec;
    for (int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            ll lefts = pref[i];
            ll rights = pref[n-1];
            if(lefts == rights)
            {
                vec.push_back({pref[i],i+1});
            }
        }
        ll leftSum = pref[i];
        ll rightSum = pref[n - 1] - pref[i-1];

        if (leftSum == rightSum)
        {
            vec.push_back({pref[i], i + 1});
        }
    }

    // cout << vec.size() << endl;
    if (vec.size() == 0)
    {
        cout << "UNSTABLE" << endl;
    }
    else
    {
        cout << vec[0].first << " " << vec[0].second << endl;
    }

    return 0;
}