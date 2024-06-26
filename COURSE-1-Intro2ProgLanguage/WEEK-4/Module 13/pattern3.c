
#include <stdio.h>
int main()
{
    // 1
    // 1 2
    // 1 2 3 
    // 1 2 3 4

    
    int n;
    scanf("%d", &n);
    // printf("%d\n",n);

    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        k++;
    }

    return 0;
}




/*
#include <stdio.h>
int main()
{
    
    //   1
    //   2 3
    //   4 5 6
    //   7 8 9 10
    
    
    int n;
    scanf("%d", &n);
    // printf("%d\n",n);

    int k = 1;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%d ", num);
            num++;
            
        }
        k++;
        printf("\n");
    }

    return 0;
}
*/