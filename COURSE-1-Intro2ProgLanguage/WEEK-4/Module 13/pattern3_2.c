#include <stdio.h>
int main()
{
    // 1 2 3 4
    // 1 2 3
    // 1 2  
    // 1

    
    int n;
    scanf("%d", &n);
    // printf("%d\n",n);

    int k = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        k--;
    }

    return 0;
}