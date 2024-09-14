#include <bits/stdc++.h>
using namespace std;

const int N = 101;
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

    for (int i = 1; i <= n; i++)
    {
        dist[i] = INT_MAX;
    }
    dist[1] = 0;

    for (int k = 0; k < n - 1; k++)
    {
        for (auto element : edgeList)
        {
            int u, v, w;
            u = element.u;
            v = element.v;
            w = element.w;

            if (dist[u] < INT_MAX and dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if(dist[i] == INT_MAX)
        {
            cout<<"30000"<<" ";
        }
        else
            cout << dist[i] << " ";
    }
    cout << endl;

    return 0;
}