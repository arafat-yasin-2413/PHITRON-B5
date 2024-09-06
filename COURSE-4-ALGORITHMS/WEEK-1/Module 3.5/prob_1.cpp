#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> v[N];
bool visited[N];

int cnt = 0;

void dfs(int src)
{
    // cout<<src<<endl;
    cnt++;
    visited[src] = true;

    for (int child : v[src])
    {
        if (visited[child] == false)
        {
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
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src;
    cin >> src;
    memset(visited, false, sizeof(visited));
    dfs(src);

    cout << cnt << endl;

    return 0;
}