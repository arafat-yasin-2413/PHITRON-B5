#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://atcoder.jp/contests/abc071/tasks/abc071_b

void solve()
{
    string s;
    cin >> s;

    set<char> st;
    for (auto el : s)
    {
        st.insert(el);
    }

    string s2;
    for (auto el : st)
    {
        s2 += el;
    }

    set<char> st2;
    // cout<<s2<<endl;

    string s3;

    int i = 0;
    char j = 'a';

    while (j <= 'z')
    {
        if (s2[i] == j)
        {
            i++;
            j++;
        }
        else
        {
            s3 += j;
            j++;
        }
    }

    if (s3.size() == 0)
    {
        cout << "None" << nl;
    }
    else
    {
        cout << s3[0] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}