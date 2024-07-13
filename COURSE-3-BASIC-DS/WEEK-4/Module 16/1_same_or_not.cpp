#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }

    // cout << st.size() << endl;
    // cout << q.size() << endl;

    int size_of_stack = st.size();
    int size_of_queue = q.size();

    bool flag = false;

    if (size_of_stack != size_of_queue)
    {
        cout << "NO" << endl;
    }
    else
    {
        while (!st.empty())
        {
            int val_from_stack = st.top();
            int val_from_queue = q.front();
            st.pop();
            q.pop();

            if (val_from_stack != val_from_queue)
            {
                flag = true;
            }
        }

        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}