#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int old_val, new_val, find_val;
    cin >> old_val >> new_val;
    cin >> find_val;

    replace(v.begin(), v.end(), old_val, new_val);
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    auto it = find(v.begin(), v.end(), find_val);

    if (it != v.end())
    {
        int idx = it - v.begin();
        cout << "Occurrence of " << find_val << " is at index = " << idx << endl;
    }
    else
    {
        cout << find_val << " not found" << endl;
        cout << -1 << endl;
    }

    

    

    return 0;
}