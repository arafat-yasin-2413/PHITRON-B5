#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];
int groupSize[N];
int level[N];
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        // groupSize[i] = 1;
        level[i] = 0;
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

void print_array(int ar[], int n)
{
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;
}

void dsu_union(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    cout << "LeaderA = " << leaderA << endl;
    cout << "LeaderB = " << leaderB << endl;

    par[leaderA] = leaderB;
}

void dsu_union_by_size(int node1,int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if(groupSize[leaderA] > groupSize[leaderB])
    {
        par[leaderB] = leaderA;
        groupSize[leaderA]+=groupSize[leaderB];
        cout<<"if a dhuksi"<<endl;
    }

    else
    {
        par[leaderA] = leaderB;
        groupSize[leaderB]+=groupSize[leaderA];
        cout<<"else a dhuksi"<<endl;
    }
}

void dsu_union_by_level(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if(level[leaderA] > level[leaderB])
    {
        par[leaderB] = leaderA;
    }
    else if(level[leaderB] > level[leaderA])
    {
        par[leaderA] = leaderB;
    }
    else
    {
        par[leaderA] = leaderB;
        level[leaderB]++;
    }
}

int main()
{
    dsu_initialize(7);
    cout<<"before union: ";
    print_array(par,7);

    dsu_union_by_level(1,2);
    dsu_union_by_level(2,3);
    dsu_union_by_level(4,5);
    dsu_union_by_level(5,6);
    dsu_union_by_level(1,4);
    cout<<"after union : ";
    print_array(par,7);
    print_array(level,7);

    cout<<dsu_find(1)<<endl;
    cout<<dsu_find(4)<<endl;
    

    return 0;
}