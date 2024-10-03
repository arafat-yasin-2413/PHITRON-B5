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
    {
        return node;
    }
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
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> edgeList;

    while (e--)
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
        int p = child.u;
        int q = child.v;
        int r = child.w;

        int leaderA = dsu_find(p);
        int leaderB = dsu_find(q);

        if (leaderA == leaderB)
        {
            continue;
        }

        else if (leaderA != leaderB)
        {
            dsu_union_by_size(leaderA, leaderB);
            total_cost += r;
        }
    }

    // cout << total_cost << endl;

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        // cout << i << " er parent : " << parent[i] << endl;
        if(parent[i] == -1)
        cnt++;
    }

    if(cnt>1) cout<<"IMPOSSIBLE"<<endl;
    else cout<<total_cost<<endl;

    return 0;
}