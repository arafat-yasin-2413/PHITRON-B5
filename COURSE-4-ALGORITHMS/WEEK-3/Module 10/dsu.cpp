#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
    }
    par[1] = 3;
    par[2] = 1;
}

int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = dsu_find(par[node]);
    par[node] = leader;

    return leader;
}

int main()
{
    dsu_initialize(4);
    cout << dsu_find(2) << endl;

    return 0;
}