#include <bits/stdc++.h>
using namespace std;
int n, m;
char ar[1005][1005];

pair<int, int> parent[1005][1005];
bool visited[1005][1005];
int dist[1005][1005];

vector<pair<int, int>> d = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

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
    visited[si][sj] = true;
    queue<pair<int, int>> q;
    q.push({si, sj});
    dist[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = p.first + d[i].first;
            int cj = p.second + d[i].second;

            if (valid(ci, cj) and visited[ci][cj] == false and ar[ci][cj] != '#')
            {
                visited[ci][cj] = true;
                q.push({ci, cj});
                dist[ci][cj] = dist[p.first][p.second] + 1;
                parent[ci][cj] = {p.first, p.second};
            }
        }
    }
}

int main()
{
    memset(visited, false, sizeof(visited));
    memset(dist, -1, sizeof(dist));

    cin >> n >> m;
    int si, sj, di, dj;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
            if (ar[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            else if (ar[i][j] == 'B')
            {
                di = i;
                dj = j;
            }
        }
    }

    // cout << si << " " << sj << endl;
    // cout << di << " " << dj << endl;

    bfs(si, sj);

    // cout << dist[di][dj] << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << parent[i][j].first<<","<<parent[i][j].second<<"  ";
    //     }
    //     cout << endl;
    // }

    if (visited[di][dj] == false)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (visited[di][dj] == true)
            cout << "YES" << endl;

        cout << dist[di][dj] << endl;

        int xi = di;
        int xj = dj;

        vector<pair<int, int>> path;
        path.push_back({xi, xj});
        path.push_back(parent[xi][xj]);
        while (true)
        {

            int newX = parent[xi][xj].first;
            int newY = parent[xi][xj].second;

            xi = newX;
            xj = newY;

            if (ar[xi][xj] == 'A')
                break;
            path.push_back(parent[xi][xj]);
        }
        // path.push_back(parent[xi][xj]);
        reverse(path.begin(), path.end());

        // for (auto child : path)
        // {
        //     cout << child.first << " " << child.second << endl;
        // }

        string st;

        for (int i = 0; i < path.size() - 1; i++)
        {
            if (path[i].first == path[i + 1].first) // jodi row same hoy
            {
                // col 1 komte pare
                if (path[i + 1].second == path[i].second - 1)
                {
                    st += "L";
                }
                // col 1 barte pare
                else if (path[i + 1].second == path[i].second + 1)
                {
                    st += "R";
                }
            }

            else if (path[i].second == path[i + 1].second) // jodi col same hoy
            {
                // row 1 komte pare
                if (path[i + 1].first == path[i].first - 1)
                {
                    st += "U";
                }
                // row 1 barte pare
                else if (path[i + 1].first == path[i].first + 1)
                {
                    st += "D";
                }
            }
        }

        cout << st << endl;
    }

    return 0;
}