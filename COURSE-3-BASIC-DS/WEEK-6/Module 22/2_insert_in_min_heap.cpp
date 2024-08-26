#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 42, 45, 49, 52, 55};
    int x;
    cin >> x;
    v.push_back(x);

    int current_idx = v.size() - 1;

    while (current_idx != 0)
    {
        int parent_idx = (current_idx - 1) / 2;
        if (v[parent_idx] > v[current_idx])
        {
            swap(v[parent_idx], v[current_idx]);
        }
        else
            break;
        current_idx = parent_idx;
    }

    for (int element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}