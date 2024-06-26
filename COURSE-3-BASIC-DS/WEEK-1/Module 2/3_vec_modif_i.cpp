#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {10, 20, 30, 40};
    vector<int> v2;
    // v2 = v1;
    v2.assign(v1.begin(), v1.end());

    // v2.pop_back();
    // v2.pop_back();

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    return 0;
}