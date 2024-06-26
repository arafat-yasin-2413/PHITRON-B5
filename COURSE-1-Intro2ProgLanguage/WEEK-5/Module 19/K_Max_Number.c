#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>


int mx = INT_MIN;
void fun(int ar[],int n, int i)
{
    if(n==i) return;
    if(ar[i] > mx)
    {
        mx = ar[i];
    }
    fun(ar,n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);

    int ar[n];
    for(int i=0; i<n; i++)
        scanf("%d",&ar[i]);

    fun(ar,n,0);
    printf("%d\n",mx);
    
    return 0;
}