#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
vector<pair<long long int, long long int>> adj[N];
long long int dis[N];
long long int parent[N];

class cmp
{
public:
    bool operator()(pair<long long int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(long long int src)
{
    priority_queue<pair<long long int, long long int>, vector<pair<long long int, long long int>>, cmp> pq;

    pq.push({src, 0});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<long long int, long long int> par = pq.top();
        pq.pop();

        long long int parentNode = par.first;
        long long int parentCost = par.second;

        for (auto child : adj[parentNode])
        {
            long long int childNode = child.first;
            long long int childCost = child.second;

            if (parentCost + childCost < dis[childNode])
            {
                dis[childNode] = parentCost + childCost;
                pq.push({childNode, dis[childNode]});
                parent[childNode] = parentNode;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        dis[i] = 1e18 + 8;
    }

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    dijkstra(1);

    // cout << dis[n] << endl;

    if (dis[n] == 1e18 + 8)
    {
        cout << "-1" << endl;
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
        for (auto child : path)
        {
            cout << child << " ";
        }
    }

    return 0;
}