#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://atcoder.jp/contests/abc380/tasks/abc380_a

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> mp;

    while (n != 0)
    {
        mp[n % 10]++;
        n = n / 10;
    }

    bool one = false, two = false, three = false;
    for (auto el : mp)
    {
        // cout<<el.first << " : "<<el.second<<endl;
        if (el.first == 1 && el.second == 1)
        {
            one = true;
        }
        else if (el.first == 2 && el.second == 2)
        {
            two = true;
        }
        else if (el.first == 3 && el.second == 3)
        {
            three = true;
        }
    }

    if (one == true && two == true && three == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }


    return 0;
}