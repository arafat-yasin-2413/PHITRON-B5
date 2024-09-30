#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int n, m;
char ar[N][N];
bool visited[N][N];
int cmp;

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool valid(int i, int j)
{
    if (i >= 0 and i < n and j >= 0 and j < m)
    {
        return true;
    }
    return false;
}

void bfsOn2DGrid(int si, int sj)
{
    visited[si][sj] = true;
    queue<pair<int, int>> q;
    q.push({si, sj});
    cmp++;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = p.first + d[i].first;
            int cj = p.second + d[i].second;

            if (valid(ci, cj) and visited[ci][cj] == false and ar[ci][cj] == '.')
            {
                visited[ci][cj] = true;
                q.push({ci, cj});
                cmp++;
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }

    vector<int> components;
    int minComponent = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (visited[i][j] == false and ar[i][j] == '.')
            {
                cmp = 0;
                bfsOn2DGrid(i, j);
                // cout << cmp << endl;
                minComponent = min(minComponent, cmp);
                components.push_back(cmp);
            }
        }
    }

    if (components.size() == 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minComponent << endl;
    }

    // cout << "components = " << components.size() << endl;

    return 0;
}