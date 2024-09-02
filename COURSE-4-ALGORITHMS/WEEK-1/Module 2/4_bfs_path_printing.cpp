#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool visited[1005];
int level[1005];
int parent[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        // cout << parent << endl;

        // for(int i = 0; i<v[parent].size(); i++)
        // {
        //     int child = v[parent][i];
        //     cout<<"children = "<<child<<endl;
        // }

        // for (auto child : v[parent])
        for (int child : v[par])
        {
            if (visited[child] == false)
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[par] + 1;\
                parent[child] = par;
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

    int src, destination;
    cin >> src >> destination;
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    bfs(src);

    stack<int>st;
    // or , use a vector
    // .. then reverse (v.begin(),v.end())
    // .. now print the vector
    int x = destination;
    while(x!=-1)
    {
        // cout<<x<<" ";
        st.push(x);
        x = parent[x];
    }

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}