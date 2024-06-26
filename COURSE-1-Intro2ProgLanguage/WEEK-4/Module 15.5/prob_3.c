#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void count_odd(int ar[],int n)
{
    
    int odd_count = 0;
    for(int i=0; i<n; i++)
    {
        if(ar[i] % 2 != 0)
        {
            odd_count++;
        }
    }
    printf("Odd count is = %d\n",odd_count);
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

    count_odd(ar,n);
    
    return 0;
}