#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    long long int sum = 0;
    for (int element : s)
    {
        sum += element;
    }

    cout << sum << endl;

    return 0;
}


// Solution of Sifat vai
/*
#include<bits/stdc++.h>
using namespace std;

void Solve()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(),ar.end(),greater<int>());
    long long sum = 0;
    for(int i=0;i<n-1;i++)
    {
        if(ar[i] == ar[i+1])
        {
            ar[i+1]--;
        }
        if(ar[i+1] > ar[i])
        {
            ar[i+1]-= ar[i+1]-ar[i]+1;
        }
    }
     for(auto x : ar)
     {
        sum+=x;
        if(x<=1) break;
     }

     cout << sum <<" ";

}

int main()
{
    Solve();
    return 0;
}
*/