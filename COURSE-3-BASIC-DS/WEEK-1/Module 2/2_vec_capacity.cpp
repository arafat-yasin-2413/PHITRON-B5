#include <bits/stdc++.h>
using namespace std;

int main()
{
    // capacity icreases doubly after some push backs
    // vector<int>v;
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    // v.push_back(12);
    // cout<<v.capacity()<<endl;
    // v.push_back(16);
    // cout<<v.capacity()<<endl;
    // v.push_back(18);
    // cout<<v.capacity()<<endl;
    // v.push_back(19);
    // cout<<v.capacity()<<endl;

    vector<int> v2 = {4, 5, 6, 7};

    // v2.clear();

    v2.resize(3);
    v2.resize(5,45);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    // cout << "after clearing size = " << v2.size() << endl;

    // cout << v2[0] << endl;
    // cout << v2[1] << endl;
    // cout << v2[2] << endl;
    // cout << v2[3] << endl;

    // cout << "empty kina = " << v2.empty() << endl;

    

    return 0;
}