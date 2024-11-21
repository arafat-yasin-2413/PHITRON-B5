#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/problemset/problem/1907/B

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;

        stack<int> cap;
        stack<int> small;

        int sz = s.size();

        for (int i = 0; i < sz; i++)
        {
            if (s[i] == 'B')
            {
                s[i] = '$';
                if (!cap.empty())
                {
                    s[cap.top()] = '$';
                    cap.pop();
                }
                continue;
            }

            if (s[i] == 'b')
            {
                s[i] = '$';
                if (!small.empty())
                {
                    s[small.top()] = '$';
                    small.pop();
                }
                continue;
            }

            if (isupper(s[i])) // B and b checked and used continue
            {
                cap.push(i);
            }
            else if (islower(s[i]))
            {
                small.push(i);
            }
        }

        // cout << s << endl;
        for (auto el : s)
        {
            if (el != '$')
            {
                cout << el;
            }
        }
        cout << endl;
    }

    return 0;
}