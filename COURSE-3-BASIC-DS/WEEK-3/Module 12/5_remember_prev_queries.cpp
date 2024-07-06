#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    list<int> myList;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            myList.push_front(v);
            cout << "L -> ";
            for (int val : myList)
            {
                cout << val << " ";
            }
            cout << endl;
            list<int> copyList(myList);
            copyList.reverse();
            cout << "R -> ";
            for (int val : copyList)
            {
                cout << val << " ";
            }
            cout << endl;
        }

        else if (x == 1)
        {
            myList.push_back(v);
            cout << "L -> ";
            for (int val : myList)
            {
                cout << val << " ";
            }
            cout << endl;
            list<int> copyList(myList);
            copyList.reverse();
            cout << "R -> ";
            for (int val : copyList)
            {
                cout << val << " ";
            }
            cout << endl;
        }

        else if (x == 2)
        {
            int sz = myList.size();
            // cout<<sz<<endl;
            if (v < sz)
            {
                myList.erase(next(myList.begin(), v));
                // cout<<"v = "<<v<<" te delete korechi"<<endl;
            }
            cout << "L -> ";
            for (int val : myList)
            {
                cout << val << " ";
            }
            cout << endl;
            list<int> copyList(myList);
            copyList.reverse();
            cout << "R -> ";
            for (int val : copyList)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    return 0;
}