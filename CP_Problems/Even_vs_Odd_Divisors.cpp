#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://www.codechef.com/START158D/problems/EVENODDDIV

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> even;
        vector<int> odd;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                // cout<<i<<endl;
                if (i % 2 == 0)
                    even.push_back(i);
                else if (i % 2 != 0)
                    odd.push_back(i);
        }

        // cout << even.size() << " " << odd.size() << endl;
        if(even.size() == odd.size()) cout<<0<<endl;
        else if(even.size() > odd.size()) cout<<1<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}