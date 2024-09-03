#include <bits/stdc++.h>
using namespace std;

vector<int> ar[10005];
bool visited[10005];
// priority_queue<int,vector<int>,greater<int>>pq;
priority_queue<int>pq;

void bfs(int src, int l)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    visited[src] = true;

    while (!q.empty())
    {
        pair<int, int> pr = q.front();
        q.pop();

        int parent = pr.first;
        int level = pr.second;
        if (level == l)
        {
            // cout << parent << " ";
            pq.push(parent);
        }

        for (int child : ar[parent])
        {
            if (visited[child] == false)
            {
                q.push({child, level + 1});
                visited[child] = true;
            }
        }
    }

    
}

int main()
{
    int v, e;
    cin >> v >> e;
    memset(visited, false, sizeof(visited));

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        ar[a].push_back(b);
        ar[b].push_back(a);
    }

    int desired_level;
    cin >> desired_level;
    bfs(0, desired_level);

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}