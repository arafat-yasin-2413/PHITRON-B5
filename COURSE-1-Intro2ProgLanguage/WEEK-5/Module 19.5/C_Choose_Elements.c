#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    int ar[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] <= ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    // for(int i=0; i<n; i++)
    //     printf("%d ",ar[i]);

    long long int max_sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (max_sum + ar[i] > max_sum)
        {
            max_sum += ar[i];
        }
    }

    printf("%lld\n", max_sum);

    return 0;
}