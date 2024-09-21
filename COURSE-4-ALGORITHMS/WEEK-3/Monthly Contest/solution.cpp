#include<bits/stdc++.h>
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
void solve() {
    string str;
    cin >> str;
    for (auto &it : str) {
        it = towlower(it);
    }
    cout << string(str.rbegin(), str.rend()) << endl;
}
int main()
{
    fast();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}



2

#include<bits/stdc++.h>
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool isV(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

void solve() {
    string str;
    cin >> str;
    int v = 0, c = 0, d = 0;
    for (char ch : str) {
        if (isV(ch)) v++;
        else if (ch >= '0' and ch <= '9') d++;
        else c++;
    }
    int ans = 0;
    while (c > 0 or v > 0 or d > 0) {
        d--;
        c -= min(3, c);
        v -= min(v, 2);
        ans++;
    }
    cout << ans << endl;
}
int main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}




3
#include<bits/stdc++.h>
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int64_t f(int64_t i) {
    if (i < 3) return 0;
    return i / 3 + f((i % 3) + i / 3);
}

void solve() {
    int64_t n;
    cin >> n;
    cout << (n / 5) + f(n / 5) << endl;
}
int main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}


4


#include<bits/stdc++.h>
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int64_t> vec(n), pre = {0};
    for (auto &it : vec) {
        cin >> it;
        pre.push_back(it + pre.back());
    }
    int q;
    cin >> q;
    while (q--) {
        int64_t sum;
        cin >> sum;
        auto it = lower_bound(all(pre), sum);
        if (it != pre.end()) {
            cout << it - pre.begin() << '\n';
        }
        else cout << -1 << "\n";
    }
}
int main()
{
    fast();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}




5
#include<bits/stdc++.h>
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve() {
    int n;
    cin >> n;
    int64_t sz = (int64_t)pow(2, n);
    sz--;
    vector<int64_t> vec(sz);
    for (auto &it : vec) {
        cin >> it;
    }
    queue<pair<int64_t, int64_t>> q;
    q.push({0, sz - 1});
    while (!q.empty()) {
        auto pr = q.front();
        int64_t l = pr.first, r = pr.second;
        int64_t mid = (l + r) / 2;
        cout << vec[mid] << " ";
        if (l < mid) q.push({l, mid - 1});
        if (mid < r) q.push({mid + 1, r});
        q.pop();
    }
    cout << endl;
}
int main()
{
    fast();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}




6

#include<bits/stdc++.h>
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;


void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<vector<int64_t>> dp(n + 1, vector<int64_t>(26, 0));

    for (int i = 0; i < n; i++) {
        dp[i + 1][str[i] - 'a']++;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 26; j++) {
            dp[i][j] += dp[i - 1][j];
        }
    }

    int q;
    cin >> q;

    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        int cnt = 0;

        for (int i = 0; i < 26; i++) {
            if ((dp[r][i] - dp[l - 1][i]) % 2 == 1) {
                cnt++;
            }
        }

        if (cnt / 2 <= k) {
            yes;
        }
        else no;
    }
}


int main()
{
    fast();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}