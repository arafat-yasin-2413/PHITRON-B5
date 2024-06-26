#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    // a choto, c boro
    // b,d soman
    // b,d osoman

    // a boro, c choto
    // b,d soman
    // b,d osoman

    // a , c soman
    // b,d soman
    // b,d osoman

    long long int a, b, c, d;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    // printf("%lld %lld %lld %lld\n",a,b,c,d);

    if (a < c) // 3^2, 5^4
    {
        if (b == d || b < d)
        {
            printf("NO\n");
        }

        else if (b > d)
        {
            printf("YES\n");
        }
    }

    else if (a > c) // 5^5, 4^3
    {

        if (b == d || b > d)
        {
            printf("YES\n");
        }

        else if (b < d)
        {
            printf("NO\n");
        }
    }

    else if (a == c)
    {
        if (b == d || b < d)
        {
            printf("NO\n");
        }

        else if (b > d)
        {
            printf("NO\n");
        }
    }

    return 0;
}