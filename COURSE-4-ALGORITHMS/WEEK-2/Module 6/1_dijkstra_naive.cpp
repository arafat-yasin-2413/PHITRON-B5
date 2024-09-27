#include <bits/stdc++.h>
using namespace std;

const int N = 100;
vector<pair<int, int>> adj[N];
long long int dist[N];

void dijkstra_naive(int src)
{
    dist[src] = 0;
    queue<pair<int, int>> q;
    q.push({src, dist[src]});

    while (!q.empty())
    {
        pair<int, int> pr = q.front();
        q.pop();

        int parentNode = pr.first;
        int parentCost = pr.second;

        for (pair<int, int> child : adj[parentNode])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (parentCost + childCost < dist[childNode])
            {
                dist[childNode] = parentCost + childCost;
                q.push({childNode,dist[childNode]});
            }
        }
    }
}

int main()
{
    /*
    5 8
    0 1 10
    0 2 7
    0 3 4
    1 4 3
    2 4 5
    2 1 1
    3 4 5
    3 2 1
        */

    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    // cout << sizeof(adj) / sizeof(adj[0]) << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (auto pr : adj[i])
    //     {
    //         cout << i << " -> ";
    //         cout << pr.first << "," << pr.second << endl;
    //     }
    //     cout<<endl;
    // }

    
    for (int i = 1; i < n; i++)
    {
        dist[i] = INT_MAX;
    }

    dijkstra_naive(2);

    for (int i = 0; i < n; i++)
    {
        cout << i << " : " << dist[i] << endl;
    }

    

    return 0;
}
