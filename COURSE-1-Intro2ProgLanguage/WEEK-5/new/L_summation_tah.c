#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

long long int fun(long long int ar[],int n)
{
    if(n<0) return 0;
    long long int s = fun(ar,n-1);
    return s+ar[n];
}


int main()
{
    int n;
    scanf("%d",&n);

    long long int ar[n];
    for(int i=0; i<n; i++)
        scanf("%lld",&ar[i]);

    
    long long int result = fun(ar,n-1);
    printf("%lld\n",result);
    
    return 0;
}