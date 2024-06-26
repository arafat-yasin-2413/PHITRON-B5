#include<stdio.h>
#include<limits.h>
int main()
{
    int n; 
    scanf("%d",&n);

    int ar[n];

    for(int i = 0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    int mn = __INT_MAX__;
    // printf("%d\n",mn);


    int pos;
    for(int i = 0; i<n; i++)
    {
        if(ar[i] < mn)
        {
            mn = ar[i];
            pos = i;
        }
    }
    printf("%d %d\n",mn,pos+1);
    

    return 0;
}