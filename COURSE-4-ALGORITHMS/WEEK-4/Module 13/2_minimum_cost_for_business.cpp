#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int parent[N];
int groupSize[N];

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

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        groupSize[i] = 1;
    }
}

int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (groupSize[leaderA] > groupSize[leaderB])
    {
        parent[leaderB] = leaderA;
        groupSize[leaderA] += groupSize[leaderB];
    }

    else
    {
        parent[leaderA] = leaderB;
        groupSize[leaderB] += groupSize[leaderA];
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    dsu_initialize(n);
    vector<Edge> edgeList;
    while (m--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edgeList.push_back(Edge(a, b, c));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);

    int total_cost = 0;
    for (auto child : edgeList)
    {
        // cout << child.u << " " << child.v << " " << child.w << endl;

        int leader1 = dsu_find(child.u);
        int leader2 = dsu_find(child.v);

        if (leader1 != leader2)
        {
            dsu_union_by_size(child.u, child.v);
            // dsu_union_by_size(leader1,leader2);
            total_cost += child.w;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " er parent : " << parent[i] << endl;
    }

    cout << total_cost << endl;

    return 0;
}