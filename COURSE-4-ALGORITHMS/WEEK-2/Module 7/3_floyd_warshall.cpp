#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll n, e;
    cin >> n >> e;

    ll adj[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                adj[i][j] = 0;
            }
            else
            {
                adj[i][j] = INT_MAX;
            }
        }
    }

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = c;
    }

    cout << "before" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        if (adj[i][i] < 0)
        {
            cout << "Cycle Detected. No Answer will be taken." << endl;
        }
    }

    return 0;
}