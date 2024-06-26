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

    int s = 0;

    for (int i = 0; i < n; i++)
    {
        s += ar[i];
    }

    cout << s << endl;

    return 0;
}