#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> ar[N];

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << ": ";
    //     for (int element : ar[i])
    //     {
    //         cout << element << " ";
    //     }
    //     cout << endl;
    // }

    priority_queue<int> pq;

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {

        int x;
        cin >> x;
        if (ar[x].size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {

            for (int element : ar[x])
            {
                pq.push(element);
            }

            while (!pq.empty())
            {
                cout << pq.top() << " ";
                pq.pop();
            }
            cout << endl;
        }
    }

    return 0;
}