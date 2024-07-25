#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v1(n);
    vector<int> res;

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for (int i = 0; i < n; i++)
    {
        int mx = 0;
        for(int j=i+1; j<n; j++)
        {
            if(j==n+1)
            {
                res.push_back(0);
                continue;
            }
            else if(v1[j] > mx)
            {
                mx = v1[j];
            }
        }
        res.push_back(mx);
    }

    for (int element : res)
    {
        cout << element << endl;
    }

    return 0;
}