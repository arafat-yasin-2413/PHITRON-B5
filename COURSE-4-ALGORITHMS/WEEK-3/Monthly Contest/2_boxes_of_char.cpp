#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;

        // cout << st << endl;
        int vow = 0, cons = 0, dig = 0;
        for (auto x : st)
        {
            if (x >= '0' and x <= '9')
            {
                dig++;
            }
            else if (x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u')
            {
                vow++;
            }

            else
                cons++;

            // cout<<x<<endl;
        }

        // cout << cons << " " << vow << " " << dig << endl;

        int c = 3, v = 2, d = 1;

        vector<int> vec;
        int p = cons / c;
        if (p != 0)
            vec.push_back(p);
        int q = vow / v;
        if (q != 0)
            vec.push_back(q);
        int r = dig / d;
        if (r != 0)
            vec.push_back(r);

        int mn = INT_MAX;
        for (int el : vec)
        {
            // cout<<el<<" ";
            if (el < mn)
                mn = el;
        }
        cout << mn << endl;
    }

    return 0;
}