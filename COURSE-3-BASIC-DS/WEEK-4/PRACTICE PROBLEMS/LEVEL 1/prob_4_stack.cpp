#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    int k;
    cin >> k;

    int cnt = 0;
    int target = n - k + 1;

    while (!st.empty())
    {
        int val = st.top();
        st.pop();
        cnt++;
        if (cnt == target)
        {
            cout << val << endl;
            break;
        }
    }

    return 0;
}