#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }

    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "size = " << v.size() << endl;
    cout << "capacity = " << v.capacity() << endl;
    cout << "max size = " << v.max_size() << endl;

    cout << "---------------------------------------" << endl;

    v.resize(20, 0);
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "size after resizing = " << v.size() << endl;
    cout << "capacity after resizing = " << v.capacity() << endl;

    cout << "---------------Let's clear--------------" << endl;

    v.clear();
    cout << "size after clearing = " << v.size() << endl;
    cout << "capacity after clearing = " << v.capacity() << endl;

    cout << "---------------------------------------" << endl;

    if (v.empty())
        cout << "Vector is Empty Now" << endl;
    else
        cout << "Vector is Not Empty" << endl;
    cout << "------------------Last Resizing---------------------" << endl;

    v.resize(10,100);
    cout<<"size now = "<<v.size()<<endl;
    cout<<"capacity now = "<<v.capacity()<<endl;
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}