#include<stdio.h>
int main()
{
    int d,q,r;
    scanf("%d%d%d",&d,&q,&r);

    int divisor = (d-r)/q;
    printf("%d\n",divisor);
    
    return 0;
}