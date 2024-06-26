#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int frq[26] = {0};

    for (char ch : s)
    {
        frq[ch - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        while (frq[i - 'a'])
        {
            cout << i;
            frq[i - 'a']--;
        }
    }

    return 0;
}