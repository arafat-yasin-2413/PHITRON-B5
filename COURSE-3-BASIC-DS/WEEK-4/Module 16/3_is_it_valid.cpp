#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        string s;
        cin >> s;

        stack<char> st;
        bool flag = false;

        for (char x : s)
        {
            if (!st.empty())
            {
                if (x == '0' and st.top() == '1')
                {
                    if (!st.empty())
                    {
                        st.pop();
                    }
                }

                else if (x == '1' and st.top() == '0')
                {
                    if (!st.empty())
                    {
                        st.pop();
                    }
                }

                else
                {
                    // cout << "uporer 2 ta condition mile nai. tai push korte aschi" << endl;
                    st.push(x);
                    // cout << "condition mile nai. push kora sesh" << endl;
                }
            }
            else
            {
                // cout << "push korte aschi" << endl;
                st.push(x);
                // cout << "push korchi" << endl;
            }
        }

        // cout << "Printing the stack = " << endl;
        // while (!st.empty())
        // {
        //     cout << st.top() << endl;
        //     st.pop();
        // }
        // cout << endl;
        // }

        if (st.empty())
        {
            flag = true;
        }

        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}