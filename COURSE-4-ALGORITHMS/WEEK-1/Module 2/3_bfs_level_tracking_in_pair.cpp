#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool visited[1005];

void bfs(int src)
{
    queue<pair<int,int>> q;
    q.push({src,0});
    visited[src] = true;
    

    while (!q.empty())
    {
        pair<int,int> pr = q.front();
        q.pop();

        int parent = pr.first;
        int level = pr.second;

        // cout << parent << endl;

        // for(int i = 0; i<v[parent].size(); i++)
        // {
        //     int child = v[parent][i];
        //     cout<<"children = "<<child<<endl;
        // }

        // for (auto child : v[parent])
        for (int child : v[parent])
        {
            if (visited[child] == false)
            {
                q.push({child,level+1});
                visited[child] = true;
                
            }
            // cout << "Children = " << child << endl;
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src;
    cin >> src;
    memset(visited, false, sizeof(visited));

    bfs(src);

    // bfs function er moddhe destination pass korle 
    // .. particularly destination er level ta jana jay
    
    
    return 0;
}