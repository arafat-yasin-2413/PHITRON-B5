#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/contest/2036/problem/A

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int i = 0;
        int j = i + 1;
        map<int, int> mp;

        while (i < j)
        {
            // cout << ar[i] << " - " << ar[j] << " = " << abs(ar[i] - ar[j]) << endl;
            mp[abs(ar[i] - ar[j])]++;
            if (i == n - 2 and j == n - 1)
                break;
            i++;
            j++;
        }

        // cout << endl;

        // cout << mp.size() << endl;

        int sz = mp.size();

        bool flag = false;
        for (auto el : mp)
        {
            if (el.first == 5 or el.first == 7)
                continue;
            else
                flag = true;
        }

        if (flag)
            cout << "NO" << nl;
        else
            cout << "YES" << nl;
        // cout<<endl;
    }

    return 0;
}