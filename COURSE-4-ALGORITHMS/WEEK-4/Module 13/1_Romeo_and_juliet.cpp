#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
int dis[N];

void bfs(int src)
{
    visited[src] = true;
    queue<int> q;
    q.push(src);
    dis[src] = 0;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();

        for (auto child : adj[p])
        {
            if (visited[child] == false)
            {
                visited[child] = true;
                dis[child] = dis[p] + 1;
                q.push(child);
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    memset(visited, false, sizeof(visited));
    memset(dis, -1, sizeof(dis));

    while (e--)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int src, d, k;
    cin >> src >> d >> k;

    bfs(src);

    // cout<<dis[d]<<endl;
    if (dis[d] != -1 and dis[d] <= k * 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}