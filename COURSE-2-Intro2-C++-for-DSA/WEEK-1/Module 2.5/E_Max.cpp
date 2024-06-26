#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n; 
    int ar[n];

    for(int i=0; i<n; i++)
        cin>> ar[i];



    int max_val = ar[0];

    for(int i=0; i<n; i++)
    {
        max_val = max(max_val, ar[i]);
    }

    cout<<max_val<<endl; 

    return 0;
}