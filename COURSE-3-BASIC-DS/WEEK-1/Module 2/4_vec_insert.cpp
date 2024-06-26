#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {146, 2, 3, 4, 58};
    cout << *(v.begin() + 0) << endl;
    cout << *(v.end()-1) << endl;

    vector<int>v2={101,102,103,104};

    v.insert(v.begin()+2,v2.begin(),v2.end());
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}