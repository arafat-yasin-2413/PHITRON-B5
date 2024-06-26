#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            // cout << i << " " << i + 1 << endl;
            if (ar[i] < ar[i + 1])
            {
                continue;
            }
            else if (ar[i] > ar[i + 1])
            {
                flag = 1;
            }
        }

        // cout << flag << endl;
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}