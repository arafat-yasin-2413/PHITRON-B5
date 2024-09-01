#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int mat[n][n];
    vector<int> ar[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = 0;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        ar[a].push_back(b);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << i << ": ";
        for (int element : ar[i])
        {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}