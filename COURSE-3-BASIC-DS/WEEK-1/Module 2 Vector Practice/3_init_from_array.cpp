#include <bits/stdc++.h>
using namespace std;

int main()
{

    int ar[5] = {10, 20, 30, 40, 50};

    vector<int> v(ar, ar + 5);

    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}