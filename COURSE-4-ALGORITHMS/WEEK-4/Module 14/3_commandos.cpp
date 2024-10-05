#include <bits/stdc++.h>
using namespace std;

int n, e;
const int N = 105;
vector<int> adj[N];
int dis_from_source[N];
int dis_from_desti[N];
bool visited[N];

void bfs(int src, int track)
{
    queue<int> q;
    q.push(src);
    if (track == 1)
    {
        dis_from_source[src] = 0;
    }
    else if (track == 2)
    {
        dis_from_desti[src] = 0;
    }
    visited[src] = true;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();

        for (int child : adj[p])
        {
            if (visited[child] == false)
            {
                visited[child] = true;
                if (track == 1)
                {
                    dis_from_source[child] = dis_from_source[p] + 1;
                }
                else if (track == 2)
                {
                    dis_from_desti[child] = dis_from_desti[p] + 1;
                }

                q.push(child);
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for (int k=1; k<=t; k++)
    {
        cin >> n >> e;

        while (e--)
        {
            int a, b;
            cin >> a >> b;

            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        int s, d;
        cin >> s >> d;

        memset(visited, false, sizeof(visited));
        memset(dis_from_source, -1, sizeof(dis_from_source));
        bfs(s, 1);

        memset(visited, false, sizeof(visited));
        memset(dis_from_desti, -1, sizeof(dis_from_desti));
        bfs(d, 2);

        // for (int i = 0; i < n; i++)
        // {
        //     cout << i << " er distance = " << dis_from_source[i] << endl;
        // }

        // cout << endl;

        // for (int i = 0; i < n; i++)
        // {
        //     cout << i << " er distance = " << dis_from_desti[i] << endl;
        // }

        int total_time = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int distance = dis_from_source[i] + dis_from_desti[i];
            total_time = max(total_time, distance);
        }

        cout << "Case "<<k<<": "<< total_time << endl;

        for (int i = 0; i < n; i++)
        {
            adj[i].clear();
        }
    }

    return 0;
}