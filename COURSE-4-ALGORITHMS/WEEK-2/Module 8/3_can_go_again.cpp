#include <bits/stdc++.h>
using namespace std;

const long long int INF = 1e18;
const int N = 1e3 + 5;
long long int dist[N];

class Edge
{
public:
    int u;
    int v;
    int w;

    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{

    int n, e;
    cin >> n >> e;

    vector<Edge> edgeList;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edgeList.push_back(Edge(a, b, c));
    }

    // cout << edgeList.size() << endl;

    // for (auto el : edgeList)
    // {
    //     cout << el.u << " " << el.v << " " << el.w << endl;
    // }

    int src;
    cin >> src;

    for (int i = 1; i <= N; i++)
    {
        dist[i] = INF;
    }
    dist[src] = 0;

    for (int k = 1; k <= n; k++)
    {
        for (auto element : edgeList)
        {
            int u, v, w;
            u = element.u;
            v = element.v;
            w = element.w;

            if (dist[u] < INF and dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    // detecting cycle
    int isCycle = false;
    for (auto element : edgeList)
    {
        int u, v, w;
        u = element.u;
        v = element.v;
        w = element.w;

        if (dist[u] < INF and dist[u] + w < dist[v])
        {
            dist[v] = dist[u] + w;
            isCycle = true;
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int d;
        cin >> d;

        if (isCycle)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else
        {
            if (dist[d] == INF)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dist[d] << endl;
            }
        }
    }

    // for (int i = 0; i <= n; i++)
    // {
    //     cout << i << ": " << dist[i] << endl;
    // }

    return 0;
}