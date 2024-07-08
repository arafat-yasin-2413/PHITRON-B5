#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> L;

    void push(int v)
    {
        L.push_back(v);
    }

    void pop()
    {
        L.pop_front();
    }

    int front()
    {
        return L.front();
    }

    int size()
    {
        return L.size();
    }

    bool empty()
    {
        return L.empty();
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    if (!q.empty())
    {
        cout << q.front();
    }

    return 0;
}