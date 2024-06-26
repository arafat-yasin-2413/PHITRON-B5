// https://codeforces.com/contest/1703/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        // cout << s << endl;

        int freq[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 65]++;
        }

        int balloons = 0;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                balloons += 2;
                freq[i] -= 1;
                if (freq[i] > 0)
                {
                    balloons += freq[i];
                    freq[i] = 0;
                }
            }
        }

        cout << balloons << endl;
    }

    return 0;
}