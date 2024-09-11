#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool visited[N];
vector<int> adj[N];
int p_arr[N];
bool ans;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        // cout<<parent<<" ";

        for (int child : adj[parent])
        {
            if (visited[child] == true and p_arr[parent] != child)
            {
                ans = true;
            }
            if (visited[child] == false)
            {
                visited[child] = true;
                q.push(child);
                p_arr[child] = parent;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));
    memset(p_arr, -1, sizeof(p_arr));
    ans = false;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            bfs(i);
        }
    }

    if (ans)
        cout << "Cycle Found" << endl;
    else
        cout << "No Cycle Found" << endl;

    return 0;
}