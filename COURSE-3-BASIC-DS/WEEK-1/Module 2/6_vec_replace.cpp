#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 4, 5, 6, 2, 7, 8, 2, 9, 2, 2};

    replace(v.begin(), v.end()-1, 2, 100);

    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}