#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        stack<char> st;

        for (char x : s)
        {
            if (x == '1')
            {
                if (!st.empty() and st.top() == '0')
                {
                    st.pop();
                }
                else
                {
                    st.push(x);
                }
            }

            else
            {
                st.push(x);
            }
            // cout<<x<<endl;
        }
        // cout<<endl;

        // cout << "Printing the stack : " << endl;
        // while (!st.empty())
        // {
        //     cout << st.top() << endl;
        //     st.pop();
        // }
        // cout << endl;

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