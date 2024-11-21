#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/contest/1669/problem/C

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

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

        bool flag = false;
        for (int i = 0; i < n - 2; i++)
        {
            if (ar[i] % 2 != ar[i + 2] % 2)
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "NO" << nl;
        else
            cout << "YES" << nl;
    }

    return 0;
}

/*
6
2 2 4 6 6 2
5
2 2 6 3 2
2
5 6
3
1 2 5
YES
NO
YES
YES



6
1 6 4 4 4 4
5
3 5 2 1 6
NO
NO




3
1 2 5
3
1 2 3
YES
YES



6
1 6 4 6 5 3
4
5 3 3 3
2
3 6
4
6 4 4 2
4
2 2 4 5
NO
YES
YES
YES
NO
*/