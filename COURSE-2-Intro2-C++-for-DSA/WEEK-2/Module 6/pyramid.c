#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    int space = n - 1; // -1
    int star = 1;      // 9

    for (int i = 1; i <= n; i++) // i = 5
    {
        // 1. space print korbo
        //              1  <= 0
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        // 2. star print korbo
        //                   7
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        // 3. new line print korbo
        printf("\n");

        // 4. star,space er sonkhya change korbo
        space = space - 1;
        star = star + 2;
    }

    return 0;
}