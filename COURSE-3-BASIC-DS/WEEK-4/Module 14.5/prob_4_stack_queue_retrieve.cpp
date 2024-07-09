#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    stack<int>st;
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    queue<int>q2;
    while(!st.empty())
    {
        q2.push(st.top());
        st.pop();
    }

    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<endl;


    
    

    return 0;
}