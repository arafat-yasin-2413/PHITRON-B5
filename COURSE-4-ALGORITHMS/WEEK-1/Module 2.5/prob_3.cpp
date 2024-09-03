#include <bits/stdc++.h>
using namespace std;

vector<int> ar[10005];
bool visited[10005];

int bfs(int src, int node)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        if (parent == node)
        {
            return ar[parent].size();
        }

        for (int child : ar[parent])
        {
            if (visited[child] == false)
            {
                q.push(child);
                visited[child] = true;
            }
        }
    }
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

    memset(visited, false, sizeof(visited));

    int node;
    cin >> node;
    int cnt = bfs(0, node);
    cout << cnt << endl;

    return 0;
}