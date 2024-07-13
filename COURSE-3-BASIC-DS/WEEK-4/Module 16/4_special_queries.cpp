#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    queue<string> q;

    for (int i = 0; i < Q; i++)
    {
        int command;
        string name;
        cin >> command;

        if (command == 0)
        {
            cin >> name;
            q.push(name);
        }
        else if (command == 1)
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}