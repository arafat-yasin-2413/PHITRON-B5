
/*
 // prob 1
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> v[N];
bool visited[N];

int cnt=0;

void dfs(int src)
{
    // cout<<src<<endl;
    cnt++;
    visited[src] = true;

    for(int child: v[src])
    {
        if(visited[child] == false)
        {
            dfs(child);
        }
    }
}

int main()
{

    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src;
    cin>>src;
    memset(visited,false,sizeof(visited));
    dfs(src);

    cout<<cnt<<endl;

    return 0;
}
*/

/*
// prob 2

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> v[N];
bool visited[N];


void dfs(int src)
{
    // cout << src << endl;
    visited[src] = true;

    for (int child : v[src])
    {
        if (visited[child] == false)
        {
            dfs(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));

    int component = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            dfs(i);
            component++;
        }
    }

    cout << component << endl;

    return 0;
}
*/

// prob 3
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> v[N];
bool visited[N];

int total;

void dfs(int src)
{

    // cout << src << endl;
    total++;
    visited[src] = true;

    for (int child : v[src])
    {
        if (visited[child] == false)
        {
            dfs(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            dfs(i);
            // cout<<"total call = "<<total<<endl;
            pq.push(total);
            total = 0;
        }
    }

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}