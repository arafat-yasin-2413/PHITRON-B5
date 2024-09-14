#include <bits/stdc++.h>
using namespace std;

const long long int INF = 1e18+9;
const int N = 1e3 + 5;
vector<pair<int, int>> v[N];
long long int dis[N];

void dijkstra_optimized(int src)
{

    queue<pair<int,int>> q;

    q.push({0, src});
    dis[src] = 0;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        int node = parent.second;
        int cost = parent.first;

        for (pair<int, int> child : v[node])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                q.push({dis[childNode],childNode});
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
        int a, b, c;
        cin >> a >> b >> c;

        v[a].push_back({b, c});
    }

    for (int i = 1; i < N; i++)
    {
        dis[i] = INF;
    }

    int src, q, d, dw;
    cin >> src;

    dijkstra_optimized(src);

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> d >> dw;
        if (dis[d] <= dw)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    // for (int i = 1; i < n; i++)
    // {
    //     cout << i << " -> " << dis[i] << endl;
    // }

    return 0;
}