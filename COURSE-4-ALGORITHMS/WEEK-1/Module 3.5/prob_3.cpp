#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> v[N];
bool visited[N];

int total;

void dfs(int src)
{

    // cout << src << endl;
    total++;
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

    memset(visited, false, sizeof(visited));

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            dfs(i);
            // cout<<"total call = "<<total<<endl;
            pq.push(total);
            total = 0;
        }
    }

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}