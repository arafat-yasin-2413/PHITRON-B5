#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int up = n + 1;
    // cout << up << endl;
    long long int mult = n * up;
    // cout << mult << endl;
    long long int res = mult / 2;
    cout << res << endl;

    // 167959139
    // 14105136270790230

    return 0;
}