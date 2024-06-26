#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, s;
    cin >> n >> s;

    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    // for (int i = 0; i < n; i++)
    //     cout << ar[i] << " ";

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                cout << "i = " << i << " j = " << j << " k = " << k << endl;
            }
            
        }
        cout<<endl;
    }

    return 0;
}