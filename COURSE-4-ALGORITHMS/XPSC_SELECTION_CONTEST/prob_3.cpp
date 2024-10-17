// My Solution 
// Array Reconstruction
 
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
 
 
        ll cur_sum = 0;
        for (int i = 0; i < n - 2; i++)
        {
            ll x;
            cin>>x;
 
            cur_sum += x;
        }
 
        ll prev_sum;
        cin >> prev_sum;
 
        cout << (prev_sum - cur_sum) + 1 << endl;
    }
 
    return 0;
}
 
// naive approach
/*
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    int ar[n - 2];
    ll cur_sum = 0;
    for (int i = 0; i < n - 2; i++)
    {
        cin >> ar[i];
        cur_sum += ar[i];
    }
 
    ll prev_sum;
    cin >> prev_sum;
 
    ll newSz = prev_sum - cur_sum;
 
    vector<int> vec(newSz + 1);
    for (int i = 0; i <= newSz; i++)
    {
        vec[i] = i;
    }
 
    // for (int el : vec)
    // {
    //     cout << el << " ";
    // }
    // cout << endl;
 
 
    set<pair<int, int>> s;
    for (int i = 0; i < newSz; i++)
    {
        for (int j = i + 1; j <= newSz; j++)
        {
            // int x = vec[i] + vec[i];
            // int y = vec[i] + vec[j];
            s.insert({vec[i], vec[i]});
            s.insert({vec[i], vec[j]});
            // cout << vec[i] << " " << vec[i] << endl;
            // cout << vec[i] << " " << vec[j] << endl;
        }
        // cout << endl;
    }
 
    // cout << "****************" << endl;
 
    for (int i = newSz; i > 0; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            // int x = vec[i] + vec[i];
            // int y = vec[i] + vec[j];
            // if (x == newSz or y == newSz)
            // {
            //     s.insert({x, y});
            // }
            s.insert({vec[i], vec[i]});
            s.insert({vec[i], vec[j]});
            // cout << vec[i] << " " << vec[i] << endl;
            // cout << vec[i] << " " << vec[j] << endl;
        }
        // cout<<endl;
    }
 
    // vector<pair<int,int>> res;
    int cnt = 0;
    for (pair<int, int> pr : s)
    {
        // cout << pr.first << " " << pr.second << endl;
        if (pr.first + pr.second == newSz)
        {
            // res.push_back({pr.first,pr.second});
            cnt++;
        }
    }
    cout << cnt << endl;
 
    return 0;
}
*/