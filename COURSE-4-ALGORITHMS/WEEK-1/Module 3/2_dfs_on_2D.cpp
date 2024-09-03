#include <bits/stdc++.h>
using namespace std;

char ar[20][20];
bool visited[20][20];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int ci, int cj)
{
    if (ci < 0 or ci >= n or cj < 0 or cj >= m)
    {
        return false;
    }
    return true;
}

void dfs(int si, int sj)
{
    cout << si << " " << sj << endl;
    visited[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) == true and visited[ci][cj] == false)
        {
            dfs(ci, cj);
        }
    }
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }

    int si, sj;
    cin >> si >> sj;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << ar[i][j];
    //     }
    //     cout << endl;
    // }

    memset(visited, false, sizeof(visited));
    dfs(si, sj);

    return 0;
}