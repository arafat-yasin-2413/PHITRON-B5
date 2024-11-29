/*

    // Support session (Saidul Islam vaiya)
int n, k;
  cin >> n >> k;
  string s, t;
  cin >> s >> t;
  int soneCnt = 0, toneCnt = 0, mismatch = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == '1') soneCnt++;
    if(t[i] == '1') toneCnt++;
    if(s[i] != t[i]) mismatch++;
  }
  if(soneCnt != toneCnt) {
    cout << "NO\n";
    return;
  }
  int operations = 0;
  if(mismatch%2 == 0) {
    operations = mismatch/2;
    if(operations > k) {
      cout << "NO\n";
      return;
    }
    if((n == 2) && (s[0] != s[1])) {
      int extra = k-operations;
      if(extra%2 == 0) {
        cout << "YES\n";
        return;
      }
      else {
        cout << "NO\n";
        return;
      }
    }
    else {
    // n > 2, (n == 2 && s[0] == s[1])
      cout << "YES\n";
      return;
    }
  }
  else {
    cout << "NO\n";
    return;
  }
*/

#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://www.codechef.com/problems/CONVERT
// Difficulty 1559

void solve()
{
    int n, k;
    cin >> n >> k;

    string s, t;
    cin >> s >> t;

    string copy1 = s, copy2 = t;

    sort(copy1.begin(), copy1.end());
    sort(copy2.begin(), copy2.end());

    // cout << copy1 << " " << copy2 << nl;

    // sort kore na mille direct No
    if (copy1 != copy2)
    {
        cout << "NO" << nl;
        return;
    }

    int missmatch = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            missmatch++; // 0
        }
    }

    // cout << missmatch << nl;

    // missmatch can be odd
    if (missmatch % 2 != 0)
    {
        cout << "NO" << nl;
        return;
    }

    bool result = false;
    int requiredOperation = missmatch / 2; // 0

    // required operation can't be > k
    if (requiredOperation > k)
    {
        cout << "NO" << nl;
        return;
    }

    // corner case:
    /*
        2 1
        11
        11
    */
    if (n == 2 and s[0] == s[1])
    {
        cout << "YES" << nl;
        return;
    }
    if (n == 2 and requiredOperation <= k) // 0 <= 2
    {
        int extraOperation = k - requiredOperation; // 1-0 = 1
        if (extraOperation % 2 == 0)
        {
            result = true;
        }
        else
        {
            result = false;
        }
    }

    // for other strings
    else if (n > 2 and requiredOperation <= k)
    {
        result = true;
    }

    if (result)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}