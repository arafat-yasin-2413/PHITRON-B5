#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
char ar[1000][1000];
bool visited[1000][1000];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int row, col;

bool valid(int ci, int cj)
{
    if (ci < 0 or ci >= row or cj < 0 or cj >= col)
    {
        return false;
    }
    return true;
}

void dfs(int si, int sj)
{
    // cout << si << " " << sj << endl;
    visited[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) and visited[ci][cj] == false and ar[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}

int main()
{

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

    // dfs(1,4);
    int cnt = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ar[i][j] == '.' and visited[i][j] == false)
            {
                dfs(i, j);
                // cout << endl;
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}