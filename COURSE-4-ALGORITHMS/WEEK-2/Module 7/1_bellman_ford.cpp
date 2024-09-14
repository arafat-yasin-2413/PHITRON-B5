#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int dist[N];

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

    /*
    4 4
    1 2 3
    0 3 10
    2 3 4
    0 1 2
    */
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

    dist[0] = 0;
    for (int i = 1; i < n; i++)
    {
        dist[i] = INT_MAX;
    }

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

    for (int i = 0; i < n; i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;

    return 0;
}