#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void fun(int ar[], int n)
{
    if(n<0) return;
    if(n%2==0)
    {
        if(n == 0)
        {
            printf("%d",ar[n]);
        }
        else 
        {
            printf("%d ",ar[n]);
        }
    }
    fun(ar,n-1);

}

int main()
{
    int n;
    scanf("%d",&n);

    int ar[n];
    for(int i=0; i<n; i++)
        scanf("%d",&ar[i]);

    fun(ar,n-1);
    
    
    return 0;
}