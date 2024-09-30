#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
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
    for (int i = 1; i <= n; i++)
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
    // for (auto child : edgeList)
    // {
    //     cout << child.u << " " << child.v << " " << child.w << endl;
    // }

    long long int total_cost = 0;
    for (auto child : edgeList)
    {
        int U, V, W;
        U = child.u;
        V = child.v;
        W = child.w;

        int leaderU = dsu_find(U);
        int leaderV = dsu_find(V);
        if (leaderU != leaderV)

        {
            dsu_union_by_size(leaderU, leaderV);
            total_cost += W;
        }
    }

    // cout << total_cost << endl;

    int count_of_minus_one = 0;
    for (int i = 1; i <= n; i++)
    {
        // cout<<i<<" er parent = "<<parent[i]<<endl;
        if (parent[i] == -1)
        {
            count_of_minus_one++;
        }
    }

    // cout << count_of_minus_one << endl;
    // cout<<dsu_find(1)<<endl;
    // cout<<dsu_find(2)<<endl;
    // cout<<dsu_find(3)<<endl;

    if (count_of_minus_one == 1)
    {
        cout << total_cost << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}