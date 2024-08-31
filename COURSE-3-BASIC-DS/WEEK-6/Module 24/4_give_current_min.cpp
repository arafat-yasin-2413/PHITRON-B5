#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;

    // pq.push(10);
    // pq.push(20);
    // pq.push(4);
    // pq.push(55);
    // pq.push(2);

    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        pq.push(x);
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int command;
        cin >> command;

        if (command == 0) // insert korbo
        {
            int val;
            cin >> val;
            pq.push(val);

            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }

        else if (command == 1) // print cur min
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }

        else if (command == 2) // delete the cur min
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top() << endl;
                }
                else if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
            }
            else if (pq.empty())
            {
                cout << "Empty" << endl;
            }
        }
    }

    // while (!pq.empty())
    // {
    //     cout << pq.top() << endl;
    //     pq.pop();
    // }

    return 0;
}