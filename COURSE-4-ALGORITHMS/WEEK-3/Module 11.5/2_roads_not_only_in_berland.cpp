#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int parent[N];
int groupSize[N];
bool visited[N];

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

    /*
    10
    5 9
    8 5
    7 6
    7 9
    3 9
    2 1
    7 2
    3 6
    7 1

    */
    int n, e;
    cin >> n;
    e = n - 1;
    dsu_initialize(n);
    vector<pair<int, int>> eliminatedRoads;
    vector<pair<int, int>> createdRoads;
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int leader1 = dsu_find(a);
        int leader2 = dsu_find(b);

        if (leader1 != leader2)
        {
            // dsu_union_by_size(leader1, leader2);
            dsu_union_by_size(a, b);
        }
        else if (leader1 == leader2)
        {
            eliminatedRoads.push_back({a, b});
        }
    }

    // cout << eliminatedRoads.size() << endl;
    // for (auto child : eliminatedRoads)
    // {
    //     cout << child.first << " " << child.second << endl;
    // }

    for (int i = 2; i <= n; i++)
    {
        int leaderA = dsu_find(1);
        int leaderB = dsu_find(i);

        if (leaderA != leaderB)
        {
            createdRoads.push_back({leaderA, leaderB});
            // dsu_union_by_size(leaderA, leaderB);
            dsu_union_by_size(1, i);
        }
    }

    cout << eliminatedRoads.size() << endl;
    for (int i = 0; i < eliminatedRoads.size(); i++)
    {
        cout << eliminatedRoads[i].first << " " << eliminatedRoads[i].second << " " << createdRoads[i].first << " " << createdRoads[i].second << endl;
    }

    return 0;
}