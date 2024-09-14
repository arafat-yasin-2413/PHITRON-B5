#include <bits/stdc++.h>
using namespace std;
const int N = 101;
long long int adj[N][N];

int main()
{
    int n;
    cin >>n;


    // input
    for(int i=1;i <=n; i++)
    {
        for(int j=1 ; j<=n; j++)
        {
            cin>>adj[i][j];
            if(adj[i][j] == -1)
            {
                adj[i][j] = INT_MAX;
            }
        }
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

    int mx= INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // cout << adj[i][j] << " ";
            if(adj[i][j] != INT_MAX and adj[i][j] > mx)
            {
                mx = adj[i][j];
            }
        }
        // cout << endl;
    }

    cout<<mx<<endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << endl;
    // }



    return 0;
}