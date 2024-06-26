#include<bits/stdc++.h>
using namespace std;

int * sort_it(int n)
{
    int *ar = new int[n];
    for(int i=0; i<n; i++)
        cin>>ar[i];

    // for(int i=0; i<n; i++)
    //     cout<<ar[i]<<" ";

    sort(ar,ar+n,greater<int>());
    return ar;
}


int main()
{
    int n; 
    cin>>n;

    int *result_array = sort_it(n);

    for(int i=0; i<n; i++)
        cout<<result_array[i]<<" ";

    cout<<endl;


    
    return 0;
}