#include <bits/stdc++.h>
using namespace std;
int n, m;
char ar[1005][1005];

bool visited[1005][1005];
int dist[1005][1005];
pair<int, int> parent[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i >= 0 and i < n and j >= 0 and j < m)
    {
        return true;
    }
    return false;
}

void bfs(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
}

int main()
{
    memset(visited, false, sizeof(visited));
    memset(dist, -1, sizeof(dist));

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }

    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            if (ar[i][j] == 'B')
            {
                di = i;
                dj = j;
            }
        }
    }

    // cout << "si = " << si << " sj = " << sj << endl
    //      << "di = " << di << " dj = " << dj << endl;

    bfs(si, sj);
    // printing the grid
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << dist[i][j];
    //     }
    //     cout << endl;
    // }

    // cout << dist[di][dj] << endl;

    return 0;
}