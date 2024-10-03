#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> adj[N];
bool visited[N];
int parent[N];
int dist[N];

void bfs(int src)
{
    visited[src] = true;
    queue<int> q;
    dist[src] = 0;
    q.push(src);

    while (!q.empty())
    {
        int p = q.front();
        q.pop();

        for (int child : adj[p])
        {
            if (visited[child] == false)
            {
                visited[child] = true;
                dist[child] = dist[p] + 1;
                parent[child] = p;
                q.push(child);
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    memset(visited, false, sizeof(visited));
    memset(dist, -1, sizeof(dist));
    memset(parent, -1, sizeof(parent));

    while (m--)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs(1);

    // for (int el : parent)
    // {
    //     cout << el << endl;
    // }

    if (dist[n] == -1)
    {
        cout << "IMPOSSIBLE" << endl;
    }

    else
    {
        vector<int> path;

        int x = n;
        while (x != -1)
        {
            path.push_back(x);
            x = parent[x];
        }

        reverse(path.begin(), path.end());

        
        cout<<path.size()<<endl;
        
        for (int el : path)
        {
            cout << el << " ";
        }

        
    }

    return 0;
}