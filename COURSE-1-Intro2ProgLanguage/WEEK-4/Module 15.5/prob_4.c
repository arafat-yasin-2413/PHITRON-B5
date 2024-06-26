#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void change_it(int ar[],int n)
{
    ar[n-1] = 100;
    
    for(int i=0; i<n; i++)
    {
        printf("%d ",ar[i]);
    }
    
}

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }

    change_it(ar,n);
    
    return 0;
}