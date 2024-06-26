#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v = {1, 20, 2, 4, 3, 5, 1, 2, 4, 5, 3, 2};
    vector<int> v = {9, 8, 5, 6, 3, 4};

    // vector<int>::iterator it;

    auto it = find(v.begin(), v.end(), 6698);
    // cout << *it << endl;

    if (it == v.end())
        cout << "NOT FOUND" << endl;
    else
        cout << "FOUND" << endl;

    return 0;
}