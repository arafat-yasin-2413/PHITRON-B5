#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N= 103;
const long long int INF= 1e18;
int main()
{

    ll n, e;
    cin >> n >> e;

    ll adj[n+1][n+1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                adj[i][j] = 0;
            }
            else
            {
                adj[i][j] = INF;
            }
        }
    }

    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = min(adj[a][b],c);
        
    }

    // cout << "before" << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    int q;
    cin>>q;

    while(q--)
    {
        ll s,d;
        cin>>s>>d;

        if(adj[s][d] == INF)
        {
            cout<<"-1"<<'\n';
        }
        else
        {
            cout<<adj[s][d]<<'\n';
        }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     if (adj[i][i] < 0)
    //     {
    //         cout << "Cycle Detected. No Answer will be taken." << endl;
    //     }
    // }

    return 0;
}