// https://codeforces.com/contest/1676/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        // cout<<s<<endl;
        int sum_left = 0;
        int sum_right = 0;

        for (int i = 0; i < 3; i++)
        {
            int d = s[i] - '0';
            sum_left += d;
        }

        for (int i = 3; i < 6; i++)
        {
            int d = s[i] - '0';
            sum_right += d;
        }

        // cout << sum_left << endl;
        // cout << sum_right << endl;

        if (sum_left == sum_right)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}