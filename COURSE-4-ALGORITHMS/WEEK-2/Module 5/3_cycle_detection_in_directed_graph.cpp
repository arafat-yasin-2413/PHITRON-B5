#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool visited[N];
vector<int> adj[N];
bool pathVisit[N];

bool ans;

void dfs(int src)
{
    visited[src] = true;
    pathVisit[src] = true;
    // cout << src << " ";

    for (int child : adj[src])
    {
        if (pathVisit[child])
        {
            ans = true;
        }
        if (visited[child] == false)
        {
            dfs(child);
        }
    }
    pathVisit[src] = false;
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
    }

    memset(visited, false, sizeof(visited));
    memset(pathVisit, false, sizeof(pathVisit));

    ans = false;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            dfs(i);
        }
    }

    if (ans)
        cout << "Cycle Found" << endl;
    else
        cout << "No Cycle Found" << endl;

    

    return 0;
}