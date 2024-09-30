#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
const int M = 1e3 + 10;
int n, m;
char ar[N][M];
bool visited[N][M];

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
    visited[si][sj] = true;
    queue<pair<int, int>> q;
    q.push({si, sj});

    for (int i = 0; i < 4; i++)
    {
        if (!q.empty())
        {
            int ci = q.front().first + d[i].first;
            int cj = q.front().second + d[i].second;

            if(valid(ci,cj) and visited[ci][cj]==false and ar[ci][cj]=='.')
            {
                q.push({ci,cj});
            }
        }
    }

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        // cout << "p.f = "<< p.first << " , p.s = " << p.second << endl;

        for (int i = 0; i < 4; i++)
        {
            int ci = p.first + d[i].first;
            int cj = p.second + d[i].second;
            if (valid(ci, cj) and visited[ci][cj] == false and ar[ci][cj] != '#')
            {
                visited[ci][cj] = true;
                q.push({ci, cj});
                // cout << "ci = " << ci << ", cj = " << cj << endl;
                cout << ci << " " << cj << endl;
            }
        }
        // cout<<endl;
    }
}

int main()
{
    memset(visited, false, sizeof(visited));

    int si, sj, di, dj;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
            if (ar[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            else if (ar[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << ar[i][j];
    //     }
    //     cout << endl;
    // }

    cout << si << " " << sj << endl;
    cout << di << " " << dj << endl;
    cout << endl;

    bfs(si, sj);

    return 0;
}