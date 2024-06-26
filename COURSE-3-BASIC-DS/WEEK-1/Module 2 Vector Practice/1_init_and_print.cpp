#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }

    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}