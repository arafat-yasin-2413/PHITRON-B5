#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    vector<int> vec;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = ar[i] + ar[j];
            if (sum % 2 == 0)
            {
                vec.push_back(sum);
            }
        }
    }

    int ans = INT_MIN;

    for (int el : vec)
    {
        // cout << el << endl;
        ans = max(ans, el);
    }

    // cout << ans << endl;
    if (ans == INT_MIN)
    {
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 == 0)
            {
                cout << ar[i] << endl;
                break;
            }
        }
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}