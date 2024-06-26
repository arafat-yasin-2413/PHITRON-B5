#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    int up = (5+n+5+1)/2;
    // printf("up = %d\n",up);

    int space = up - 1;
    int star = 1;

    for (int i = 1; i <= up+5; i++)
    {

        if (i > up)
        {
            star = n;
            space = 5;
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= star; j++)
            {
                printf("*");
            }
            printf("\n");
        }

        else
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }

            for (int j = 1; j <= star; j++)
            {
                printf("*");
            }

            // if (i <= up)
            // {
                printf("\n");
                space--;
                star += 2;
            // }
        }
    }

    return 0;
}