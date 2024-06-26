#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // sort(v.begin(), v.end());

    // for (int val : v)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        auto it = find(v.begin(),v.end(),v[i]+1);
        if(it != v.end())
        {
            cnt++;
        }
    }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int flag = 0;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (v[i] + 1 != v[j])
    //         {
    //             continue;
    //         }
    //         else if (v[i] + 1 == v[j])
    //         {
    //             if(flag == 0)
    //             {
    //                 cnt++;
    //             }
    //             flag = 1;
    //         }
    //     }
    // }

    cout << cnt << endl;

    return 0;
}