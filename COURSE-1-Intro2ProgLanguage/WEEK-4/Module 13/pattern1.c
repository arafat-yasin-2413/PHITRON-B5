#include<stdio.h>
int main()
{
    /*
    
    5
    *
    **
    ***
    ****
    *****

    */
    int n;
    scanf("%d",&n);
    // int k = 1;
    int k = n;

    for(int i=1; i<=n; i++)
    {
        // printf("hello\n");
        for(int j=1; j<=k; j++)
        {
            printf("*");
        }
        printf("\n");
        // k++;
        k--;
    }


    
    return 0;
}