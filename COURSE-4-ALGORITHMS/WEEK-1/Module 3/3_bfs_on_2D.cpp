#include <bits/stdc++.h>
using namespace std;

bool visited[20][20];
int n, m;
int dis[20][20];
char ar[20][20];
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

        cout << pr.first << " " << pr.second << endl;

        for (int i = 0; i < 4; i++)
        {
            int ci = pr.first + d[i].first;
            int cj = pr.second + d[i].second;

            if (valid(ci, cj) == true and visited[ci][cj] == false)
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
    memset(visited, false, sizeof(visited));
    memset(dis, -1, sizeof(dis));

    bfs(si, sj);

    // cout << dis[0][3];
    cout << dis[2][3];

    return 0;
}