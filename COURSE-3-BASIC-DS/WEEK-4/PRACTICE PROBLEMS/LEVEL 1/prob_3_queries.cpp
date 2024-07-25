#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    vector<int> v;

    while (q--)
    {
        int command;
        cin >> command;

        if (command == 1)
        {
            int val;
            cin >> val;
            if (v.empty())
            {
                v.push_back(val);
            }
            else
            {
                v.insert(v.begin() + 1, val);
            }
        }

        else if(command ==2)
        {
            int val2;
            cin>>val2;

            if(v.empty())
            {
                v.push_back(val2);
            } 
            else
            {
                v.insert(v.end()-1,val2);
            }
        }
    }


    // v.push_back(3);
    // v.insert(v.begin()+1,4);
    // v.insert(v.begin()+1,5);
    // v.insert(v.end()-1,1);
    // v.insert(v.end()-1,8);

    for (int element : v)
    {
        cout << element << endl;
    }

    return 0;
}