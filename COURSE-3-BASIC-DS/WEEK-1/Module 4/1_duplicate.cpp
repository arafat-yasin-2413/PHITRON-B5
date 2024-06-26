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

    sort(ar, ar + n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << ar[i] << " ";
    // }
    // cout << endl;

    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (ar[i] != ar[i + 1])
        {
            continue;
        }
        else if (ar[i] == ar[i + 1])
        {
            flag = 1;
        }
    }

    // cout << flag << endl;

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}