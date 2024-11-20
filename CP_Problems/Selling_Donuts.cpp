#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://www.codechef.com/START161D/problems/DONUTSELL

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;

        int ar[n];
        int br[m];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> br[i];
        }

        int sad_customer = 0;
        for (int i = 0; i < m; i++)
        {
            int type = br[i];
            // type 1

            type--;
            if (ar[type] > 0)
            {
                ar[type]--;
            }
            else if (ar[type] == 0)
            {
                sad_customer++;
            }
        }

        cout << sad_customer << nl;
    }

    return 0;
}