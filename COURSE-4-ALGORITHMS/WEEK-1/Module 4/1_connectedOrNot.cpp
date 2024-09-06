#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> ar[N];
bool visited[N];

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        ar[a].push_back(b);
    }

    for (int i = 0; i < N; i++)
    {
        visited[i] = false;
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

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;

        bool isFound = false;
        if (x == y)
            isFound = true;
        else
        {
            for (int element : ar[x])
            {
                if (element == y)
                {
                    isFound = true;
                }
            }
        }

        if (isFound)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}