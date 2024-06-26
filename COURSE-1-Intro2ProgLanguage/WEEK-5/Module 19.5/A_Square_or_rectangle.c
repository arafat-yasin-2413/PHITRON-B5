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
        long long int a, b;
        scanf("%lld%lld", &a, &b);

        if (a == b)
        {
            printf("Square\n");
        }

        else
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}