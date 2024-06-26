#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ar[n];
    int pre[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    pre[0] = ar[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + ar[i];
    }

    int flag = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int left_sum = pre[i - 1];
        int right_sum = pre[n - 1] - pre[i];
        if (left_sum == right_sum)
        {
            cout << i << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "There is no Equilibrium Index in the input array" << endl;
    }

    return 0;
}