#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll input;

bool reachValue(ll n)
{
    if (n > input)
        return false;
    if (n == input)
        return true;
    bool op1 = reachValue(n * 10);
    bool op2 = reachValue(n * 20);
    return op1 or op2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> input;
        if (reachValue(1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}