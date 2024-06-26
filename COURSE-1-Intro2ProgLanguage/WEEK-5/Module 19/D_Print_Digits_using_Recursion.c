#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int x)
{
    if (x == 0)
        return;
    int last_digit = x % 10;
    x = x / 10;
    fun(x);
    printf("%d ", last_digit);
}

int main()
{

    int test;
    scanf("%d", &test);

    while (test--)
    {
        int n;
        scanf("%d", &n);
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