#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 85 29 2533
    

    int x, y, t;
    cin >> x >> y >> t;

    int mn = min(x, y);
    // cout<<mn<<endl;
    int mx = max(x, y);

    int flag = 0;
    for (int i = 1; i <= t / mn; i++)
    {
        if ((t - mn * i) % mx == 0)
        {
            flag = 1;
        }
    }

    // cout << flag << endl;
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else if (flag == 0)
    {
        cout << "NO" << endl;
    }

    return 0;
}