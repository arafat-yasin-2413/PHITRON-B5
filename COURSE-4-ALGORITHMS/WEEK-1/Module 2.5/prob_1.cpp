#include <bits/stdc++.h>
using namespace std;

vector<int> ar[10005];
bool visited[10005];

int bfs(int src, int dest)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    visited[src] = true;
    int shortest_distance = -1;

    while (!q.empty())
    {
        pair<int, int> pr = q.front();
        q.pop();

        int parent = pr.first;
        int level = pr.second;
        if (dest == parent)
        {
            shortest_distance = level;
        }

        for (int child : ar[parent])
        {
            if (visited[child] == false)
            {
                q.push({child, level + 1});
                visited[child] = true;
                // if (child == dest)
                // {
                //     shortest_distance = level + 1;
                //     break;
                // }
            }
        }
    }

    return shortest_distance;
}

int main()
{
    int v, e;
    cin >> v >> e;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        ar[a].push_back(b);
        ar[b].push_back(a);
    }


    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        memset(visited, false, sizeof(visited));
        int src, dest;
        cin >> src >> dest;
        int ans = bfs(src, dest);
        cout << ans << endl;
    }

    return 0;
}