#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logN)
    }

    // cout<<s.count(100)<<endl; // O(logN)
    if (s.count(1900))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " - " << s.count(*it) << endl;
    }

    return 0;
}