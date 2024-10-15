#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string st1, st2;
    while (cin >> st1 >> st2)
    {
        // cout << st1 << endl;
        // cout << st2 << endl;

        int sz1 = st1.size();
        int sz2 = st2.size();

        // cout << sz1 << endl;
        // cout << sz2 << endl;

        string ans = "";
        int i = 0, j = 0;
        while (i < sz1)
        {
            if (st1[i] == st2[j])
            {
                ans += st1[i];
                i++;
                j++;
            }
            else if (st1[i] != st2[j])
            {
                i++;
            }
        }

        // cout << "i = " << i << "j = " << j << endl;

        // cout << ans << endl;

        // cout << st2 << endl;
        // cout << ans << endl;

        if (ans.size() != 0 and st2 != ans)
        {
            cout << "Impossible" << endl;
        }
        else if (ans.size() == 0)
        {
            cout << "Impossible" << endl;
        }
        else if (st2 == ans)
        {
            cout << "Possible" << endl;
        }
    }

    return 0;
}