#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/problemset/problem/1722/C

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

        map<string, int> mp;
        vector<string> v;

        vector<string> person1;
        vector<string> person2;
        vector<string> person3;

        for (int j = 1; j <= 3; j++)
        {
            for (int i = 1; i <= n; i++)
            {
                string s;
                cin >> s;
                v.push_back(s);
                mp[s]++;

                if (j == 1)
                {
                    person1.push_back(s);
                }
                else if (j == 2)
                {
                    person2.push_back(s);
                }
                else if (j == 3)
                {
                    person3.push_back(s);
                }
            }
        }

        // for (auto el : mp)
        // {
        //     cout << el.first << " : " << el.second << endl;
        // }

        int point1 = 0, point2 = 0, point3 = 0;

        for (auto el : person1)
        {
            if (mp[el] == 1)
            {
                point1 += 3;
            }
            else if (mp[el] == 2)
            {
                point1 += 1;
            }
        }

        for (auto el : person2)
        {
            if (mp[el] == 1)
            {
                point2 += 3;
            }
            else if (mp[el] == 2)
            {
                point2 += 1;
            }
        }

        for (auto el : person3)
        {
            if (mp[el] == 1)
            {
                point3 += 3;
            }
            else if (mp[el] == 2)
            {
                point3 += 1;
            }
        }

        cout << point1 << " " << point2 << " " << point3 << endl;
    }
    return 0;
}