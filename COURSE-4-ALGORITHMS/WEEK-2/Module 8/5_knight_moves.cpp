#include <bits/stdc++.h>
using namespace std;

const int N = 103;

bool vis[N][N];
int dis[N][N];
vector<pair<int, int>> d = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 or i >= n or j < 0 or j >= m)
        return false;
    else
        return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;

    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;

        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false)
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
}
int main()
{
    // int n,m;

    int t;
    cin >> t;
    while (t--)
    {
        // eikhane initialize korle case 16,17 te WA ashe
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         dis[i][j] = -1;
        //         vis[i][j] = false;
        //     }
        // }
        cin >> n >> m;

        int si, sj, di, dj;
        cin >> si >> sj;
        cin >> di >> dj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                dis[i][j] = -1;
                vis[i][j] = false;
            }
        }
        bfs(si, sj);

        cout << dis[di][dj] << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << dis[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}