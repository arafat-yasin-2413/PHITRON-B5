
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int x;
    cin >> x;

    int copy_arr[n];
    for (int i = 0; i < n; i++)
    {
        copy_arr[i] = ar[i];
    }

    sort(copy_arr, copy_arr + n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << ar[i] << " ";
    // }
    // cout << endl;

    int l = 0;
    int r = n - 1;

    bool book_found = false;
    int idx = -1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (copy_arr[mid] == x)
        {
            book_found = true;
            idx = mid;
            break;
        }
        if (x > ar[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    // cout << book_found << endl;
    if (book_found)
    {
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == x)
            {
                cout << i << endl;
            }
        }
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back({x, i});
    }
    int t;
    cin >> t;

    bool book_found = false;
    for (auto el : vec)
    {
        // cout << el.first << " : " << el.second << endl;
        if (el.first == t)
        {
            book_found = true;
            cout << el.second << endl;
        }
    }
    if (book_found == false)
        cout << -1 << endl;

    return 0;
}