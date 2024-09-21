#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin >> st;

    vector<char> v;

    st[0] = st[0] + 32;
    // cout<<st<<endl;

    reverse(st.begin(), st.end());
    // cout<<st<<endl;

    for (auto child : st)
    {
        v.push_back(child);
    }

    for (char el : v)
    {
        cout << el;
    }
    cout << endl;

    return 0;
}