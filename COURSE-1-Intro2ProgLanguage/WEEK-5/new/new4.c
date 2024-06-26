/*
#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);

    int ar[n];
    for(int i=0; i<n; i++)
        scanf("%d",&ar[i]);

    int mn =INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(ar[i] < mn)
        {
            mn = ar[i];
        }

    }

    // printf("%d\n",mn);

    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(ar[i] == mn)
        {
            cnt++;
        }
    }

    // printf("%d\n",cnt);

    if(cnt % 2 != 0)
    {
        printf("Lucky\n");
    }

    else
    {
        printf("Unlucky\n");
    }



    return 0;
}
*/

#include <stdio.h>
#include <limits.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = INT_MAX;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            count++;

        }
    }
    printf("%d\n", count);

    return 0;
}