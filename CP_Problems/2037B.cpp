#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/contest/2037/problem/B

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // TLE on Test Case 4
    int t;
    cin >> t;

    while (t--)
    {

        int k;
        cin >> k;

        int ar[k];
        int x = k - 2;

        for (int i = 0; i < k; i++)
        {
            cin >> ar[i];
        }

        sort(ar,ar+k);
        bool inside = false;
        for (int i = 0; i < k - 1; i++)
        {
            if (inside)
            {
                break;
            }
            for (int j = i + 1; j < k; j++)
            {
                if (ar[i] * ar[j] == x)
                {
                    cout << ar[i] << " " << ar[j] << endl;
                    inside = true;
                    break;
                }
            }
        }
    }

    return 0;
}
