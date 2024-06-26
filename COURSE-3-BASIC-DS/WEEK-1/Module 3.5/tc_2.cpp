#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "i = " << i << " , j = " << j << endl;
        }
        cout << endl;
    }

    //O(n*n)
    return 0;
}