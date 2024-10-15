#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ar[n + 1];


    if (n % 2 == 1)
        cout << -1 << endl;
    else
    {

        for (int i = 1; i <= n; i++)
            ar[i] = i;

        for (int i = 1; i < n; i += 2)
        {
            swap(ar[i], ar[i + 1]);
        }

        for (int i = 1; i <= n; i++)
            cout << ar[i] << " ";
        cout << endl;
    }

    return 0;
}