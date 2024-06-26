#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
    int a, b, c, d;
    // cin >> a >> b >> c >> d;

    // cout << min(min(min(a,b),c),d)<<endl;
    // cout << max(max(max(a,b),c),d)<<endl;

    // cout<<max({a,b,c,d})<<endl;
    // cout<<min({a,b,c,d})<<endl;


    int x=10,y=20;
    cout<<"before swap x = "<<x<<", y = "<<y<<endl;
    
    swap(x,y);
    
    cout<<"after swap x = "<<x<<", y = "<<y<<endl;

    return 0;
}