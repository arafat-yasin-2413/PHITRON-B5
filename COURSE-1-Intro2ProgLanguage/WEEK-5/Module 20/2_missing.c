#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        long long int m;
        long long int a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int mult = a * b * c;

        long long int missing = m / mult;

        if (m % mult == 0)
        {
            printf("%lld\n", m / mult);
        }

        else if (m % mult != 0)
        {
            printf("-1\n");
        }
    }

    return 0;
}