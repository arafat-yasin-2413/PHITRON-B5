#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://www.codechef.com/START160D/problems/ORANGES

int N = 505;
bool validSlice(int s)
{
    vector<bool> vec(505, false);
    vec[0] = true;

    if (s < 0)
        return false;

    for (int i = 1; i <= s; i++)
    {
        if (i >= 10 and vec[i - 10])
            vec[i] = true;
        if (i >= 11 and vec[i - 11])
            vec[i] = true;
        if (i >= 12 and vec[i - 12])
            vec[i] = true;
    }

    return vec[s];
}

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

        // int minimum_slices = n * 10;

        if (k < 10)
        {
            cout << "NO" << nl;
        }
        else
        {
            if (validSlice(k))
            {
                cout << "YES" << nl;
            }
            else
            {
                cout << "NO" << nl;
            }

        }
    }

    return 0;
}