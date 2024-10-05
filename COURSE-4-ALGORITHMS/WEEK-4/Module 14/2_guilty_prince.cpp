#include <bits/stdc++.h>
using namespace std;

int n, e;
const int N = 25;
char ar[N][N];
int dis[N][N];
bool visited[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int cnt = 0;
bool valid(int i, int j)
{
    if (i >= 0 and i < e and j >= 0 and j < n)
        return true;
    else
        return false;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    dis[si][sj] = 0;
    visited[si][sj] = true;
    cnt++;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = parent.first + d[i].first;
            int cj = parent.second + d[i].second;

            if (valid(ci, cj) and visited[ci][cj] == false and ar[ci][cj] != '#')
            {
                visited[ci][cj] = true;
                cnt++;
                dis[ci][cj] = dis[parent.first][parent.second] + 1;
                q.push({ci, cj});
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        cin >> n >> e;

        memset(dis, -1, sizeof(dis));
        memset(visited, false, sizeof(visited));

        int si, sj, di, dj;

        for (int i = 0; i < e; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> ar[i][j];
                if (ar[i][j] == '@')
                {
                    si = i;
                    sj = j;
                }
            }
        }

        // for (int i = 0; i < e; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout << ar[i][j];
        //     }
        //     cout << endl;
        // }

        // cout << "si, sj" << endl;
        // cout << si << " " << sj << endl;

        bfs(si, sj);
        

        // cout << "cnt = " << cnt << endl;

        cout << "Case " << k << ": " << cnt << endl;
        cnt=0;
    }

    return 0;
}