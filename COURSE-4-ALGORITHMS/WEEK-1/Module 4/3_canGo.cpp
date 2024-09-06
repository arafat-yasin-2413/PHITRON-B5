#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
char ar[N][N];
bool visited[N][N];
int dist[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int row, col;
bool canGo = false;

bool valid(int ci, int cj)
{
    if (ci < 0 or ci >= row or cj < 0 or cj >= col)
    {
        return false;
    }
    return true;
}

// void dfs(int si, int sj)
// {
//     // cout << si << " " << sj << endl;
//     visited[si][sj] = true;

//     for (int i = 0; i < 4; i++)
//     {
//         int ci = si + d[i].first;
//         int cj = sj + d[i].second;

//         if (ar[ci][cj] == 'B')
//             canGo = true;
//         if (valid(ci, cj) and visited[ci][cj] == false and
//             ar[ci][cj] == '.')
//         {
//             dfs(ci, cj);
//         }
//     }
// }


void bfs(int si, int sj)
{
    queue<pair<int,int>>q;
    q.push({si,sj});

    visited[si][sj] = true;
    dist[si][sj] = 0;

    while(!q.empty())
    {
        pair<int,int> pr = q.front();
        q.pop();

        for(int i = 0; i<4; i++)
        {
            int ci = pr.first + d[i].first;
            int cj = pr.second + d[i].second;

            if(valid(ci,cj) and visited[ci][cj] == false and ar[ci][cj]!='#')
            {
                q.push({ci,cj});
                visited[ci][cj] = true;
                if(ar[ci][cj] == 'B') canGo = true;
                dist[ci][cj] = dist[pr.first][pr.second]+1;
            }
        }
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> ar[i][j];
        }
    }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << ar[i][j];
    //     }
    //     cout << endl;
    // }
    memset(visited, false, sizeof(visited));
    memset(dist,-1,sizeof(dist));


    int ax, ay;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ar[i][j] == 'A')
            {
                // cout << i << " " << j << endl;
                ax = i;
                ay = j;
            }
        }
    }
    // cout << ax << " " << ay << endl;
    // cout << bx << " " << by << endl;

    // int si, sj;
    // for (int i = 0; i < 4; i++)
    // {
    //     int p = ax + d[i].first;
    //     int q = ay + d[i].second;

    //     if (ar[p][q] == '.')
    //     {
    //         si = p;
    //         sj = q;
    //     }
    // }
    // cout << si << " " << sj << endl;
    // dfs(si, sj);
    bfs(ax,ay);

    // cout << canGo << endl;
    if (canGo)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << visited[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}