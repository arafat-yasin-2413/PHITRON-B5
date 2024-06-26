#include<stdio.h>
int main()
{
    long long int x; 
    scanf("%lld",&x);

    long long int total_sal = x*365;
    printf("%lld\n",total_sal);
    
    return 0;
}