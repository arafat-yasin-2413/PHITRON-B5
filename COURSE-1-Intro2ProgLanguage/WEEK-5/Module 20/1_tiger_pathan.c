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
        int n;
        scanf("%d", &n);

        char ar[100001];
        scanf("%s", ar);

        // printf("%s\n",ar);

        int count_of_t = 0, count_of_p = 0;

        for (int i = 0; i < strlen(ar); i++)
        {
            if (ar[i] == 'T')
            {
                count_of_t++;
            }
            else if (ar[i] == 'P')
            {
                count_of_p++;
            }
        }

        // printf("count_of_t = %d\n",count_of_t);
        // printf("count_of_p = %d\n",count_of_p);

        if (count_of_t == count_of_p)
        {
            printf("Draw\n");
        }

        else if (count_of_t > count_of_p)
        {
            printf("Tiger\n");
        }

        else
        {
            printf("Pathaan\n");
        }
    }

    return 0;
}