#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// 2039A

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

        vector<int> ar;

        int x = 2;
        for (int i = 1; i <= n; i++)
        {
            ar.push_back(x);
            x = x + i;
        }

        for (auto el : ar)
        {
            cout << el << " ";
        }
        cout << nl;
    }
    return 0;
}