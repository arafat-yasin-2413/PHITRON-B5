#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> myList; // khali list
    list<int> lst2 = {10, 20, 30};
    int ar[5] = {2, 3, 4, 5, 6};
    vector<int> v = {1, 3, 5, 7, 9};
    // list<int> myList(lst2);
    // list<int>myList(ar,ar+5);
    list<int> myList(v.begin(), v.end());
    // cout<<"size = "<< myList.size()<<endl;
    // cout<<myList.front()<<endl;

    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

