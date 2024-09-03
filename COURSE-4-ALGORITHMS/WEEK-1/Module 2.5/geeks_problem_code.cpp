#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to return Breadth First Traversal of given graph
    bool visited[10005];
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        // Code here

        for (int i = 0; i < 10005; i++)
        {
            visited[i] = false;
        }
        vector<int> res;
        queue<int> q;
        q.push(0);
        visited[0] = true;

        while (!q.empty())
        {
            int p = q.front();
            q.pop();

            res.push_back(p);

            for (int child : adj[p])
            {
                if (visited[child] == false)
                {
                    q.push(child);
                    visited[child] = true;
                }
            }
        }

        return res;
    }
};

int main()
{

    return 0;
}
