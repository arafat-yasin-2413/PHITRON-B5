#include <bits/stdc++.h>
using namespace std;

int main()
{
    // to taste Segment. Fault
    // declaring the vec at first. and then take input by push back function.

    // vector<int> v;
    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     // cin >> v[i];
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // take input like array

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}