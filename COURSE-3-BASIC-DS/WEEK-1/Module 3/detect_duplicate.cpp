#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

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
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}