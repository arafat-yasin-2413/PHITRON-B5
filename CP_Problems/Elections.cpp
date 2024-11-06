#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

// https://www.codechef.com/START159D/problems/USELEC

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        /* code */

        int n, x;
        cin >> n >> x;

        int ar[n];
        int br[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> br[i];
        }

        int to_win = (n / 2) + 1;
        // cout << "to win = " << to_win << nl;

        int cnt = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] > br[i])
            {
                cnt++;
            }

            else if (x>0 and ar[i] == br[i])
            {
                cnt++;
                x = x - 1;
            }
            else
            {
                v.push_back(abs(ar[i] - br[i]));
            }
        }

        if (cnt >= to_win)
        {
            cout << "YES" << nl;
        }
        else
        {

            // cout << "cnt = " << cnt << endl;
            // cout << "x er value = " << x << endl;

            sort(v.begin(), v.end());
            // for (auto el : v)
            // {
            //     cout << el << " ";
            // }
            // cout << endl;

            for (int i = 0; i < v.size(); i++)
            {
                if ( x>0 and x > v[i])
                {
                    x = x - ((v[i] + 1));
                    cnt++;
                }
            }

            // cout << cnt << nl;
            if (cnt >= to_win)
                cout << "YES" << nl;
            else
                cout << "NO" << nl;
        }
    }
    return 0;
}