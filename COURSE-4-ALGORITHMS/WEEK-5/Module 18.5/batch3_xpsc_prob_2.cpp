#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st1, st2;
    while (cin >> st1 >> st2)
    {
        // cout << st1 << endl
        //      << st2 << endl;

        int sz1 = st1.size();
        int sz2 = st2.size();

        string newSt;
        int i = 0;
        int j = 0;
        while (i < sz1)
        {
            if (st1[i] == st2[j])
            {
                newSt += st1[i];
                i++;
                j++;
                // cout<<st2[j]<<endl;
            }
            else
            {
                i++;
            }
        }

        // cout << newSt << endl;
        if (st2 == newSt)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }

    return 0;
}