#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://atcoder.jp/contests/abc379/tasks/abc379_b

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    string st;
    cin >> st;

    int sz = st.size();

    int cnt = 0;
    int strawb = 0;

    for (int i = 0; i < sz; i++)
    {
        if (st[i] == 'X' and cnt < k)
        {
            cnt = 0;
            continue;
        }
        else if (st[i] == 'O')
        {
            cnt++;
            if (cnt == k)
            {
                strawb++;
                cnt = 0;
            }
        }
    }

    cout << strawb << nl;

    return 0;
}