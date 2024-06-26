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
        int ar[n];

        int odd = 0, even = 0, operation = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] % 2 == 0)
            {
                even++;
            }
            else if (ar[i] % 2 != 0)
            {
                odd++;
            }
        }

        // cout << "odd = " << odd << endl;
        // cout << "even = " << even << endl;

        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }

        else
        {
            if (even == n || odd == n)
            {
                operation = n / 2;
                cout << operation << endl;
            }

            else if (odd == even)
            {
                operation = 0;
                cout << operation << endl;
            }
//
            else if (odd != even)
            {
                operation = abs(odd - even)/2;
                cout << operation << endl;
            }
        }
        
    }

    return 0;
}