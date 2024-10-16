#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    int ar[n+1];

    int j = 1;
    for (int i = 1; i <= n; i += 2)
    {
        ar[i] = j;
        ar[i + 1] = j;
        j++;
    }

    ll pref[n+1];
    pref[0] = ar[0];
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + ar[i];
    }

    // for(int i=0; i<n; i++)
    // {
    //     cout<<pref[i]<<" ";
    // }

    while (q--)
    {
        int L, R;
        cin >> L >> R;

    
        if (L ==1)
        {
            cout << pref[R] << endl;
        }
        
        else
        {
            cout << pref[R] - pref[L - 1] << endl;
        }
    }

    return 0;
}

/*

        if(L == R) cout<<ar[L]<<endl; // 1 1
        else if(L<R)
        {
            if(L==0 and R == n-1) // 0 9 full
            {
                cout<<pref[n-1]<<endl;
            }
            else if(L==0 and R<n-1) // 0 7 (n=10) 0-based
            {
                cout<<pref[n-1]-abs(pref[n-1]-pref[R])<<endl;
            }

            else // as usual
            {
                cout<<pref[n-1] - ( (pref[n-1]-pref[R]) + pref[L-1] ) <<endl;
            }


        }
*/