#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/problemset/problem/1997/A

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

        int sz = s.size();

        bool isAdded = false;
        for (int i = 0; i < sz - 1; i++)
        {
            cout << s[i];
            if (s[i + 1] == s[i] and isAdded == false)
            {
                isAdded = true;
                if (s[i] == 'a')
                {
                    cout << 'b';
                }
                else
                {
                    cout << 'a';
                }
            }
        }
        
        cout << s[sz - 1];
        

        if(isAdded == false)
        {
            if(s[sz-1] == 'a')
            {
                cout<<'b';
            }
            else 
            {
                cout<<'a';
            }
        }
        cout<<nl;
    }
    return 0;
}