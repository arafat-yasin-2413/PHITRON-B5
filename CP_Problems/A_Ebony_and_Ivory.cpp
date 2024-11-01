#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
// https://codeforces.com/problemset/problem/633/A
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    bool flag = false;

    for (int i = 0; i * a <= c; i++)
    {
        int dmg = c - (i * a);
        if (dmg % b == 0)
        {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "Yes" << nl;
    else
        cout << "No" << nl;

    return 0;
}