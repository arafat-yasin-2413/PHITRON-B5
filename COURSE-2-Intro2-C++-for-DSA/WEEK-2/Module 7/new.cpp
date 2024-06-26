#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int frq[26] = {0};

    // input eivabe neua uchit
    char x;
    while(cin>>x)
    {
        frq[x-'a']++;
    }

    // apnar input system 
    // for (int i = 0; i < n; i++)
    // {
    //     char x;
    //     cin >> x;
    //     frq[x - 'a']++;
    // }

    for (char i = 'a'; i < 'z'; i++)
    {
        while (frq[i - 'a'] != 0)
        {
            cout << i;
            frq[i - 'a']--;
        }
    }

    return 0;
}