#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

    // v.erase(v.begin() + 3, v.end() - 1);
    v.erase(v.end()-2);
    for (int el : v)
    {
        cout << el << " ";
    }
    cout << endl;

    return 0;
}