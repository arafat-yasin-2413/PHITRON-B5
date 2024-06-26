#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }

        int b_ar[n];
        for (int i = 0; i < n; i++)
        {
            b_ar[i] = ar[i];
        }

        // sorting asc b array
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (ar[i] >= ar[j])
                {
                    int temp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = temp;
                }
            }
        }

        int c_ar[n];
        // working in c array
        for (int i = 0; i < n; i++)
        {
            c_ar[i] = abs(ar[i] - b_ar[i]);
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", c_ar[i]);
        }
        printf("\n");
    }

    

    return 0;
}