#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ar[n];
    long long int pref[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    pref[0] = ar[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + ar[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << pref[i] << " ";
    }

    return 0;
}