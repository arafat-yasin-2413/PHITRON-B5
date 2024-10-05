#include <bits/stdc++.h>
using namespace std;

int fact_recursive(int n)
{
    if(n==0) return 1;
    int choto_factorial = fact_recursive(n-1);
    return n*choto_factorial;
}

int main()
{
    int n;
    cin>>n;

    // cout<<fact_recursive(n)<<endl;
    int ans = 1;
    for(int i=1; i<=n; i++)
    {
        ans = ans*i;
    }
    cout<<ans<<endl;
    

    return 0;
}