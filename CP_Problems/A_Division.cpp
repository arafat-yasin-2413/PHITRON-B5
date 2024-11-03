#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/contest/1669/problem/A

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        if (x <= 1399)
            cout << "Division 4" << nl;
        else if (x >= 1400 and x <= 1599)
            cout << "Division 3" << nl;
        else if (x >= 1600 and x <= 1899)
            cout << "Division 2" << nl;
        else if (x >= 1900)
            cout << "Division 1" << nl;
    }

    return 0;
}