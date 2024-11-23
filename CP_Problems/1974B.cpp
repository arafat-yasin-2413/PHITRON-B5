#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/contest/1974/problem/B

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
        string s;
        cin >> s;

        set<char> sett;
        for (auto el : s)
        {
            sett.insert(el);
        }

        string r;
        for (auto el : sett)
        {
            r += el;
        }

        // cout<<r<<endl;

        int i = 0;
        int j = r.size() - 1;

        map<char, char> mp;
        while (i <= j)
        {
            mp[r[i]] = r[j];
            mp[r[j]] = r[i];
            i++;
            j--;
        }

        // for (auto el : mp)
        // {
        //     cout << el.first << " " << el.second << endl;
        // }

        int sz = s.size();
        for (int i = 0; i < sz; i++)
        {
            cout << mp[s[i]];
        }
        cout << endl;
    }

    return 0;
}