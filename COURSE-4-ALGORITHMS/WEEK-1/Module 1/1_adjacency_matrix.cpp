#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int mat[n][n];
    memset(mat, 0, sizeof(mat));

    // cout << "size = " << sizeof(mat)/sizeof(mat[0][0]) << endl;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        mat[a][b] = 1;
        mat[b][a] = 1;
    }

    // printing the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    // cout << endl;

    if(mat[0][5] == 1)
    {
        cout<<"Connection ache"<<endl;
    }
    else
        cout<<"Connection nai"<<endl;

    return 0;
}