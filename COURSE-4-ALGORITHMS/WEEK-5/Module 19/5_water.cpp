#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        vector<int> v2(v1);
        sort(v2.begin(), v2.end());

        // for (int child : v1)
        // {
        //     cout << child << endl;
        // }

        int first_maximum = v2[v2.size() - 1];
        int second_maximum = v2[v2.size() - 2];

        int idx1, idx2;
        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i] == first_maximum)
            {
                idx1 = i;
            }
            else if (v1[i] == second_maximum)
            {
                idx2 = i;
            }
        }

        // cout << idx1 << " " << idx2 << endl;
        if (idx1 > idx2)
            swap(idx1, idx2);
        cout << idx1 << " " << idx2 << endl;
    }

    return 0;
}