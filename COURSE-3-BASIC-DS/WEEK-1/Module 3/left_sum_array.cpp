#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int pref[n];
    pref[0] = ar[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + ar[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << pref[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << pref[i - 1] << " ";
        }
    }

    return 0;
}