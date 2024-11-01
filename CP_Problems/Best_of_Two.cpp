#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DICEGAME2

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {

        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;

        priority_queue<int> pq1;
        pq1.push(a);
        pq1.push(b);
        pq1.push(c);

        int score1 = 0;
        for (int i = 1; i <= 2; i++)
        {
            // cout<<pq1.top()<<endl;
            score1 += pq1.top();
            pq1.pop();
        }

        priority_queue<int> pq2;
        pq2.push(d);
        pq2.push(e);
        pq2.push(f);

        int score2 = 0;
        for (int i = 1; i <= 2; i++)
        {
            // cout<<pq2.top()<<endl;
            score2 += pq2.top();
            pq2.pop();
        }

        if (score1 > score2)
            cout << "Alice" << nl;
        else if (score2 > score1)
            cout << "Bob" << nl;
        else
            cout << "Tie" << nl;
    }
    return 0;
}