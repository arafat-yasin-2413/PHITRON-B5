#include <bits/stdc++.h>
using namespace std;

// const int INF = INT_MAX;
const int N = 1e3 + 5;
vector<pair<int, int>> v[N];
long long int dist[N];

void dijkstra(int src)
{
    dist[src] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({dist[src], src});

    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();

        // int parentCost = parent.first;
        int parentNode = parent.second;

        for (pair<int, int> child : v[parentNode])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (dist[parentNode] + childCost < dist[childNode])
            {
                dist[childNode] = dist[parentNode] + childCost;
                pq.push({dist[childNode], childNode});
            }
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;

        v[a].push_back({b, w});
    }

    // for(int i=1; i<=n; i++)
    // {
    //     cout<<i<<": ";
    //     for(auto el : v[i])
    //     {
    //         cout<<"("<< el.first<<", "<<el.second <<")"<<" ";
    //     }
    //     cout<<endl;
    // }

    for (int i = 1; i <= N; i++)
    {
        dist[i] = INT_MAX;
    }

    // cout<<"before"<<endl;
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << i << ": " << dist[i] << endl;
    // }


    int src;
    cin >> src;
    dijkstra(src);

    int q;
    cin >> q;

    for (int i = 1; i <= q; i++)
    {
        int d, dw;
        cin >> d >> dw;

        if (dist[d] <= dw)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    // cout<<"after"<<endl;
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << i << ": " << dist[i] << endl;
    // }
    
    return 0;
}