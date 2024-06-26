#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, n;
    cin >> x >> n;

    long long int res = 0;
    for (int i = 2; i <= n; i += 2)
    {
        long long int mult = 1;
        for (int j = 1; j <= i; j++)
        {
            mult = mult * x;
        }
        res += mult;
    }

    cout << res << endl;

    return 0;
}