#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    // priority_queue<int,vector<int>,greater<int>> pq;

    // normally max heap thake
    // greater use korle min heap hoy

    while (true)
    {
        int command;
        cin >> command;
        if (command == 0) // push korbo O(logN)
        {
            int x;
            cin >> x;
            pq.push(x);
        }

        else if (command == 1) // pop korbo O(logN)
        {
            pq.pop();
        }

        else if (command == 2) // top access korbo O(1)
        {
            cout << pq.top() << endl;
        }

        else
        {
            break;
        }
    }

    return 0;
}