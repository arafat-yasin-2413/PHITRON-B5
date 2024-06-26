#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    // ulta pyramid
    int n;
    scanf("%d",&n);

    int space = 0;
    int star = 2*n-1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=space; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=star; j++)
        {
            printf("*");
        }

        printf("\n");
        space++;
        star-=2;
    }
    
    return 0;
}