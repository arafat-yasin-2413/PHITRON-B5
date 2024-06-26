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

    int mn = ar[0];
    for(int i=1; i<n; i++)
    {
        if(ar[i] < mn)
        {
            mn = ar[i];
        }
    }

    int cnt = 0;
    for(int i=0; i<n; i++)
    {   
        if(ar[i] == mn)
        {
            cnt++;
        }
    }

    // printf("%d\n",cnt);

    if(cnt % 2 == 0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }
    
    return 0;
}