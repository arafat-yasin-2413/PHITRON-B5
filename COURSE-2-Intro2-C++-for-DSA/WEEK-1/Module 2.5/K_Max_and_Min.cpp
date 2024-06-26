#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int min_val = min(min(a,b),c);
    int max_val = max(max(a,b),c);

    cout<<min_val<<" "<<max_val<<endl;

    return 0;
}