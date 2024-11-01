#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/problemset/problem/381/A

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

    int i = 0, j = n - 1;
    int s = 0, d = 0;

    int mx_idx = -1;
    bool sereja = true;
    bool dima = false;
    while (true)
    {
        // get the maximum value's index
        if (i == j)
        {
            mx_idx = i;
        }
        else
        {
            if (ar[i] > ar[j])
            {
                mx_idx = i;
            }
            else if (ar[j] > ar[i])
            {
                mx_idx = j;
            }
        }
        // work
        if (sereja)
        {
            s += ar[mx_idx];
            sereja = false;
            dima = true;
        }

        else if (dima)
        {
            d += ar[mx_idx];
            dima = false;
            sereja = true;
        }

        // move i,j
        if (i == j)
        {
            break;
        }
        else
        {

            if (mx_idx == i)
                i++;
            else if (mx_idx == j)
                j--;
        }
    }

    cout << s << " " << d << endl;

    return 0;
}