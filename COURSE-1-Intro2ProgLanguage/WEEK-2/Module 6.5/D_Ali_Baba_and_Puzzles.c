#include<stdio.h>
int main()
{
    long long int a,b,c,d,res1,res2,res3,res4,res5,res6;

    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    res1 = a+b-c;
    res2 = a-b+c;
    res3 = a+b*c;
    res4 = a*b+c;
    res5 = a-b*c;
    res6 = a*b-c;

    if(res1 == d || res2 == d ||
        res3 == d || res4 == d ||
        res5 == d || res6 ==d )
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    
    return 0;
}