#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int parent[N];
int groupSize[N];

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
    int n, m;
    cin >> n >> m;

    dsu_initialize(n);

    while (m--)
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

    // cout << "Parent Array : " << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << " er parent -> " << parent[i] << endl;
    // }
    // cout << endl;

    // cout << "GroupSize array : " << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << " " << groupSize[i] << endl;
    // }

    vector<int> leaders;

    for (int i = 1; i <= n; i++)
    {
        if (parent[i] == -1)
        {
            leaders.push_back(i);
        }
    }

    // cout << "Leaders Array: " << endl;
    // for (int element : leaders)
    // {
    //     cout << element << " ";
    // }

    cout << leaders.size() - 1 << endl;
    for (int i = 0; i < leaders.size() - 1; i++)
    {
        cout << leaders[i] << " " << leaders[i + 1] << endl;
    }

    return 0;
}