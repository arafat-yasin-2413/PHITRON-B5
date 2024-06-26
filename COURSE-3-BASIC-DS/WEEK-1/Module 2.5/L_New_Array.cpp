#include <bits/stdc++.h>
using namespace std;

void fun(vector<int> &vec1, vector<int> &vec2)
{
    vector<int> C;

    C.insert(C.begin(),vec2.begin(),vec2.end());
    C.insert(C.end(),vec1.begin(),vec1.end());
    for (int val : C)
    {
        cout<<val<<" ";
    }

    // for (int val : vec1)
    // {
    //     C.push_back(val);
    // }

    // for (int val : C)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        v2.push_back(y);
    }
    // vector<int> v1 = {3, 5, 6, 2, 4, 9, 8, 7, 6};
    // vector<int> v2 = {100, 200, 300};
    fun(v1, v2);

    return 0;
}