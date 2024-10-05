#include <bits/stdc++.h>
using namespace std;

int n;
const int N = 35;
char ar[N][N];
int dis[N][N];
bool visited[N][N];
vector< pair< int, int > > d;

bool valid(int i, int j)
{
    if (i >= 0 and i < n and j >= 0 and j < n)
        return true;
    else
        return false;
}

void bfs(int si, int sj)
{
    queue< pair< int, int > > q;
    q.push({si, sj});
    dis[si][sj] = 0;
    visited[si][sj] = true;

    while (!q.empty())
    {
        pair< int, int > parent = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = parent.first + d[i].first;
            int cj = parent.second + d[i].second;

            if (valid(ci, cj) and visited[ci][cj] == false and ar[ci][cj] != 'T')
            {
                visited[ci][cj] = true;
                dis[ci][cj] = dis[parent.first][parent.second] + 1;
                q.push({ci, cj});
            }
        }
    }
}

int main()
{
    d.push_back({-1,0});
    d.push_back({0,1});
    d.push_back({0,-1});
    d.push_back({1,0});

    while (cin >> n)
    {
        memset(dis, -1, sizeof(dis));
        memset(visited, false, sizeof(visited));
        int si, sj, di, dj;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> ar[i][j];
                if (ar[i][j] == 'S')
                {
                    si = i;
                    sj = j;
                }
                else if (ar[i][j] == 'E')
                {
                    di = i;
                    dj = j;
                }
            }
        }

        // cout << "si = " << si << ", sj = " << sj << endl;
        // cout << "di = " << di << ", dj = " << dj << endl;

        bfs(si, sj);

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout << dis[i][j]<<"  ";
        //     }
        //     cout << endl;
        // }

        cout << dis[di][dj] << endl;
    }

    return 0;
}