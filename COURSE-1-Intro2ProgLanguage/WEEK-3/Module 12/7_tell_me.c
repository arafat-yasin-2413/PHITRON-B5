#include <stdio.h>
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

        int x;
        scanf("%d", &x);

        int is_found = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == x)
            {
                is_found = 1;
            }
        }

        // printf("%d\n",is_found);
        if (is_found == 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }

    return 0;
}