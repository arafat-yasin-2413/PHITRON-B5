#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(long long int x)
{
    if (x == 0)
        return;
    long long int last_digit = x % 10;
    x = x / 10;
    fun(x);
    printf("%lld ", last_digit);
}

int main()
{

    int test;
    scanf("%d", &test);

    while (test--)
    {
        long long int n;
        scanf("%lld", &n);
        if (n == 0)
        {
            printf("0\n");
        }
        else if (n > 0)
        {
            fun(n);
            printf("\n");
        }
    }

    return 0;
}