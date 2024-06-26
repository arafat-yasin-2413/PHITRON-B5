#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);

    long long int sum = 0;

    for(int i = 1; i<=n; i++)
        sum += i;

    printf("%lld\n",sum);
    
    return 0;
}