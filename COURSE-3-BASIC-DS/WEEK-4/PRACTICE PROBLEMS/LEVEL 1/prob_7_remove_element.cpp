#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<int> q1;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q1.push(x);
    }
    int pos;
    cin >> pos;

    int cnt = 0;
    queue<int> res;
    while (!q1.empty())
    {
        int val = q1.front();
        cnt++;
        q1.pop();
        if (cnt == pos)
        {
            continue;
        }
        res.push(val);
    }

    while (!res.empty())
    {
        cout << res.front() << " ";
        res.pop();
    }
    cout << endl;

    return 0;
}