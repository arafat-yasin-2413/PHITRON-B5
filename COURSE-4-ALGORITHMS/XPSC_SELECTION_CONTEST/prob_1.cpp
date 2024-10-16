#include <bits/stdc++.h>
using namespace std;
// 1. Make them equal
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string st1, st2;
        cin >> st1 >> st2;

        int missmatch = 0;
        for (int i = 0; i < n; i++)
        {
            if (st1[i] != st2[i])
            {
                missmatch++;
            }
        }

        // cout<<"missmatch = "<<missmatch<<endl;
        if (missmatch <= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}