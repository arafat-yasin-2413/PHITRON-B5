#include <bits/stdc++.h>
using namespace std;

int main()
{
    // type 1 - just declaring
    // vector<int> v;

    // type 2 - initializing empty vector having a size of 5
    // vector<int>v(5);

    // type 3 - initializing with same fixed value
    //  vector<int> v(6,87);
    //  for (int i = 0; i < v.size(); i++)
    //  {
    //      cout << v[i] << " ";
    //  }
    //  cout << endl;

    // type 4 - copying from another vector
    // vector<int> v1(5, 22);
    // vector<int> v2(v1);

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }
    // cout << endl;

    // type 5 - copying from another array
    // int ar[5] = {10, 20, 30, 40, 50};
    // vector<int> v2(ar, ar + 5);

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }
    // cout << endl;

    // type 6 - direct initialization
    vector<int> v2 = {10, 20, 40};
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    cout << v2.size() << endl;

    return 0;
}