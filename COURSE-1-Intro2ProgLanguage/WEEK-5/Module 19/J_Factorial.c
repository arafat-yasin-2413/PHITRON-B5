#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

long long int fun(int n)
{
    if(n==0) return 1;
    long long int ans = fun(n-1);
    return ans*n;
}
int main()
{
    long long int n;
    scanf("%lld",&n);

    long long int fact = fun(n);
    printf("%lld\n",fact);
    
    return 0;
}