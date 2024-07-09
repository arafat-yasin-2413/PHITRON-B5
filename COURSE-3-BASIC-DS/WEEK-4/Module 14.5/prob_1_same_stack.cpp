#include <bits/stdc++.h>
using namespace std;

void print_stack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    cout << endl;
}

void check_same_or_not(stack<int> st1, stack<int> st2)
{
    bool flag = false;
    while (!st1.empty())
    {
        int val1 = st1.top();
        st1.pop();
        int val2 = st2.top();
        st2.pop();

        if (val1 != val2)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    stack<int> st1;
    int sz1 = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
        sz1++;
    }

    int m;
    cin >> m;
    stack<int> st2;
    int sz2 = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
        sz2++;
    }

    // print_stack(st1);
    // print_stack(st2);

    if (sz1 != sz2)
    {
        cout << "NO" << endl;
    }
    else
    {
        check_same_or_not(st1, st2);
    }

    return 0;
}