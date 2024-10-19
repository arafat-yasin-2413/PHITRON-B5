#include <bits/stdc++.h>
using namespace std;

bool visited[1005][1005];
vector<pair<int, int>> d = {{-1, 1}, {-1, -1}, {1, -1}, {1, 1}};
pair<int, int> parent[1005][1005];

int n, m;
int ar[1005][1005];
long long int cost = 0;

bool valid(int i, int j)
{
    if (i >= 0 and i < n and j >= 0 and j < m)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while (!q.empty())
    {
        auto par = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;

            if (valid(ci, cj) and visited[ci][cj] == false and ar[ci][cj] != 0)
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                parent[ci][cj] = {par.first, par.second};
                // if (ar[ci][cj] > 0)
                // {
                //     cost += ar[ci][cj];
                // }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int k = 1; k <= t; k++)
    {

        cin >> n >> m;
        int si, sj, di, dj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> ar[i][j];
                if (ar[i][j] == -1)
                {
                    si = i;
                    sj = j;
                }
                else if (ar[i][j] == -2)
                {
                    di = i;
                    dj = j;
                }
            }
        }

        memset(visited, false, sizeof(visited));
        bfs(si, sj);
        // cout << visited[di][dj] << endl;

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         cout << parent[i][j].first << "," << parent[i][j].second << "  ";
        //     }
        //     cout << endl;
        // }

        if (visited[di][dj])
        {
            int xi = di;
            int xj = dj;

            // cout << xi << " " << xj << endl;

            while (true)
            {
                int newX = parent[xi][xj].first;
                int newY = parent[xi][xj].second;

                xi = newX;
                xj = newY;

                if (ar[xi][xj] == -1)
                {
                    break;
                }
                else if (ar[xi][xj] > 0)
                {
                    cost += ar[xi][xj];
                }
            }
        }

        // cout << cost << endl;

        if (visited[di][dj])
        {
            cout << "Case " << k << ": " << cost << "\n";
        }
        else if (visited[di][dj] == false)
        {
            cout << "Case " << k << ": " << "Impossible" << "\n";
        }
        cost = 0;
    }

    return 0;
}