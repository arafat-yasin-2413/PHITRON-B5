#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool visited[1005];
int level[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        // cout << parent << endl;

        // for(int i = 0; i<v[parent].size(); i++)
        // {
        //     int child = v[parent][i];
        //     cout<<"children = "<<child<<endl;
        // }

        // for (auto child : v[parent])
        for (int child : v[parent])
        {
            if (visited[child] == false)
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
            }
            // cout << "Children = " << child << endl;
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src;
    cin >> src;
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    bfs(src);

    for (int i = 0; i < n; i++)
    {
        cout << i << " " << level[i] << endl;
    }

    return 0;
}