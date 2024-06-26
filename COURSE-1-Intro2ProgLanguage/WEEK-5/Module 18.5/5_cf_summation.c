#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
long long int s = 0;
long long int fun(long long int ar[],int n, long long int sum)
{
    if(n<0) return 0;
    long long int s = fun(ar,n-1,sum);
    return s+ar[n];
}


int main()
{
    int n;
    scanf("%d",&n);

    long long int ar[n];
    for(int i=0; i<n; i++)
        scanf("%lld",&ar[i]);

    long long int sum = 0;
    long long int result = fun(ar,n-1,sum);
    printf("%lld\n",result);
    
    return 0;
}