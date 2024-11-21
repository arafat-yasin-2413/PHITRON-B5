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

    map<string, string> mp;

    while (t--)
    {
        string st1, st2;
        cin >> st1 >> st2;

        /*
            this is my new keyboard. typing experience is quite better than
            a4tech fg1010
        */

        bool flag = false;
        for (auto it : mp)
        {
            if (it.second == st1)
            {
                flag = true;
                mp[it.first] = st2;
            }
        }

        if (flag == false)
        {
            mp[st1] = st2;
        }
    }

    cout << mp.size() << endl;

    for (auto el : mp)
    {
        cout << el.first << " " << el.second << endl;
    }

    return 0;
}