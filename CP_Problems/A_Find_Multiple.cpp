#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long int

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;

    bool flag = false;
    for(int i=a; i<=b; i++)
    {
        if(i%c == 0)
        {
            flag = true;
            cout<<i<<endl;
            break;
        }
    }

    if(flag == false)
    {
        cout<<-1<<nl;
    }


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}