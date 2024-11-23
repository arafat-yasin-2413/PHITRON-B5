#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://codeforces.com/contest/903/problem/C

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    /*
        codeforces tutorial explanation:
        You can always show that the answer is equal to the amount of boxes of the size appearing the most in array. Result can be easily obtained by constructive algorithm: take these most appearing boxes, put smaller boxes in decreasing order of their size into free ones (there always be space) and put resulting boxes into the larger ones in increasing order.

        Overall complexity: O(n.log n)
    
    */

    int n;
    cin >> n;

    map<int, int> mp;
    int res = 0;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        mp[x]++;

        res = max(res, mp[x]);
    }

    cout << res << nl;

    return 0;
}