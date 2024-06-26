#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    cout << v[0] << endl;
    cout << v.at(1) << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << endl;

    // vector<int>::iterator it;
    // for (it = v.begin(); it < v.end(); it++)
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}