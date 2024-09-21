#include <bits/stdc++.h>
using namespace std;

int parent[8] = {-1, -1, 1, 1, 6, 4, -1, -1};

int dsu_find(int n)
{
    while (parent[n] != -1)
    {
        n = parent[n];
    }

    return n;
}

int main()
{
    cout << dsu_find(5) << endl;
    cout << dsu_find(4) << endl;
    cout << dsu_find(6) << endl;
    cout << dsu_find(7) << endl;

    return 0;
}