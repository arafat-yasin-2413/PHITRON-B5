#include <bits/stdc++.h>
using namespace std;

void fun(int n, char ch)
{
    for (int i = 1; i <= n; i++)
    {
        cout << ch;
        if (i < n)
        {
            cout << " ";
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        char ch;
        cin >> ch;

        fun(n, ch);
    }

    return 0;
}