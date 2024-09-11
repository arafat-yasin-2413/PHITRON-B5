#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool visited[N];
vector<int> adj[N];
int p_arr[N];
bool ans;

void dfs(int src)
{
    visited[src] = true;
    // cout << src << " ";

    for (int child : adj[src])
    {
        if (visited[child] == true and p_arr[src] != child)
        {
            ans = true;
            // cout << "visited[" << child << "] = " << visited[child] << endl;
            // cout << "child = " << child << endl;
            // cout << "p_arr[" << src << "] = " << p_arr[src] << endl;
            // cout << endl;
        }

        if (visited[child] == false)
        {
            p_arr[child] = src;
            dfs(child);
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
            dfs(i);
        }
    }

    cout << endl
         << "parent array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << p_arr[i] << " ";
    }
    cout << endl;

    if (ans)
        cout << "Cycle Found" << endl;
    else
        cout << "No Cycle Found" << endl;

    return 0;
}