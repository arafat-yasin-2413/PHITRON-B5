#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar + n);

    while (q--)
    {
        int x;
        cin >> x;
        int flag = 0;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            // cout << "mid = " << mid << endl;
            if (ar[mid] == x)
            {
                flag = 1;
                break;
            }
            else if (x < ar[mid])
            {
                r = mid - 1;
            }
            else if (x > ar[mid])
            {
                l = mid + 1;
            }
        }
        // cout << flag << endl;
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}