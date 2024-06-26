#include<bits/stdc++.h>
using namespace std;
void fun(int *ptr)
{
    for(int i=0; i<5; i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int *a = new int[5];
    for(int i=0; i<5; i++)
        cin>>a[i];
    fun(a);

    return 0;
}