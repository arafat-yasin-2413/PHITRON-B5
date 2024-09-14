#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
int n, m;
bool visited[N][N];
int dis[N][N];
char ar[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int ci, int cj)
{
    if (ci < 0 or ci >= n or cj < 0 or cj >= m)
    {
        return false;
    }
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> pr = q.front();
        q.pop();

        // cout << pr.first << " " << pr.second << endl;

        for (int i = 0; i < 4; i++)
        {
            int ci = pr.first + d[i].first;
            int cj = pr.second + d[i].second;

            if (valid(ci, cj) == true and visited[ci][cj] == false and ar[ci][cj] == '.')
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                dis[ci][cj] = dis[pr.first][pr.second] + 1;
            }
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
    int di, dj;
    cin >> di >> dj;
    memset(visited, false, sizeof(visited));
    memset(dis, -1, sizeof(dis));

    bfs(si, sj);

    // cout << dis[0][3];
    // cout << dis[2][3];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << dis[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    if (dis[di][dj] != -1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}