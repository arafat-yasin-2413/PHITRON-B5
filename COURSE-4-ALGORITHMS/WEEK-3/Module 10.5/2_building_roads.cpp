#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int par[N];
int groupSize[N];

void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        par[i] = -1;
        groupSize[i] = 1;
    }
}

int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = dsu_find(par[node]);
    par[node] = leader;

    return leader;
}

void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (groupSize[leaderA] > groupSize[leaderB])
    {
        par[leaderB] = leaderA;
        groupSize[leaderA] += groupSize[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        groupSize[leaderB] += groupSize[leaderA];
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    dsu_initialize(n);

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int leader1 = dsu_find(a);
        int leader2 = dsu_find(b);

        if (leader1 != leader2)
        {
            dsu_union_by_size(leader1, leader2);
        }
    }

    
    vector<int> leaders;
    for (int i = 1; i <= n; i++)
    {
        leaders.push_back(dsu_find(i));
    }

    // for (int el : leaders)
    // {
    //     cout << el << " ";
    // }

    sort(leaders.begin(), leaders.end());

    leaders.erase(unique(leaders.begin(), leaders.end()), leaders.end());
    cout << leaders.size() - 1 << endl;
    for (int i = 0; i < leaders.size() - 1; i++)
    {
        cout << leaders[i] << " " << leaders[i + 1] << endl;
    }

    return 0;
}